package mycpu
import chisel3._
import chisel3.util._

/*
Stage-1:  Accpet request
    Accept CPU request, parse request address, read meta array and data array
*/
class ysyx_22051110_CacheStage1(config: CacheConfig) extends Module{
    val io = IO(new Bundle{
        val cpu      = Flipped(Decoupled(new CPUMemReqBundle(config.w, config.w)))
        val rd       = new Bundle{
            val en    = Output(Bool())
            val index = Output(UInt(config.index_width.W))
        }
        val s1_to_s2 = Decoupled(new CacheStage1to2Bundle(config))
    })
    val tag      = io.cpu.bits.addr(config.cache_addr_w - 1, config.cache_addr_w - config.tag_width)
    val index    = io.cpu.bits.addr(config.index_width + config.offset_width - 1, config.offset_width)
    val offset   = io.cpu.bits.addr(config.offset_width - 1, 0)
    io.rd.en    := io.s1_to_s2.fire
    io.rd.index := index
    io.s1_to_s2.valid         := io.cpu.valid
    io.s1_to_s2.bits.wr       := io.cpu.bits.wr
    io.s1_to_s2.bits.wdata    := io.cpu.bits.wdata
    io.s1_to_s2.bits.wstrb    := io.cpu.bits.wstrb
    io.s1_to_s2.bits.mthrough := io.cpu.bits.mthrough
    io.s1_to_s2.bits.fencei   := io.cpu.bits.fencei
    io.s1_to_s2.bits.size     := io.cpu.bits.size
    io.s1_to_s2.bits.tag      := tag
    io.s1_to_s2.bits.index    := index
    io.s1_to_s2.bits.offset   := offset
    io.cpu.ready := io.s1_to_s2.fire
}



/*
Stage-2: Hit check & Replace choose
        Buffer CPU request signals from stage-1, get cache set from meta array and data array.
    Compare each tag of cache line in cache set with CPU request tag in address in parallel.
    The Hitted cache line will be send to stage-3. If cache miss, randomly choose one way of
    cache line to replace, and this line of cache will be send by reusing the same as the
    hitted one.
        Stage-2 will transfer CPU request signals, target cache line, replace way choice and
    cache hit signal to stage-3
*/
class ysyx_22051110_CacheStage2(config: CacheConfig) extends Module{
    val io = IO(new Bundle{
        val s1_to_s2 = Flipped(Decoupled(new CacheStage1to2Bundle(config)))
        //cache read set
        val rd_lines = Input(Vec(config.nr_ways,
            new CacheLineBundle(config.w, config.tag_width, config.block_word_n)))
        val s2_to_s3 = Decoupled(new CacheStage2to3Bundle(config))
    })
    val s2_ready_go        = 1.B
    val s2_valid           = RegInit(0.B)
    io.s1_to_s2.ready := (s2_ready_go && io.s2_to_s3.ready)
    when(io.s1_to_s2.ready){
        s2_valid := io.s1_to_s2.valid
    }
    //buffer (stage 1 to 2 reg)
    val buf        = RegInit(0.U.asTypeOf(new CacheStage1to2Bundle(config)))
    when(io.s1_to_s2.fire){
        buf       := io.s1_to_s2.bits
    }
    //hit check
    var hit1H = Wire(Vec(config.nr_ways, Bool()))
    for( i <- 0 until config.nr_ways){
        hit1H(i) := (buf.tag === io.rd_lines(i).tag) && (io.rd_lines(i).valid === 1.U)
    }
    val hit_array = Reverse(Cat(hit1H))
    val hit = hit_array.orR
    //replace choose
    val replace1H = RegInit(1.U(config.nr_ways.W))  //ring shift register
    replace1H := Cat(replace1H(config.nr_ways - 2, 0), replace1H(config.nr_ways - 1))
    //to stage3
    val target_way1H = Mux(hit === 1.U, hit_array, replace1H) //choosed bit array for hit/replace
    io.s2_to_s3.valid := (s2_valid && s2_ready_go)
    io.s2_to_s3.bits.wr           := buf.wr
    io.s2_to_s3.bits.wdata        := buf.wdata
    io.s2_to_s3.bits.wstrb        := buf.wstrb
    io.s2_to_s3.bits.mthrough     := buf.mthrough
    io.s2_to_s3.bits.fencei       := buf.fencei
    io.s2_to_s3.bits.index        := buf.index
    io.s2_to_s3.bits.tag          := buf.tag
    io.s2_to_s3.bits.offset       := buf.offset
    io.s2_to_s3.bits.size         := buf.size
    io.s2_to_s3.bits.hit          := hit
    io.s2_to_s3.bits.target_way   := OHToUInt(target_way1H)
    io.s2_to_s3.bits.target_line  := Mux1H( for( i <- 0 until config.nr_ways) yield (target_way1H(i) -> io.rd_lines(i)) )
}



/*
Stage-3: Request Commit & Write back & Refill
        Check hit signal. If cache hit then choose the target cache line and generates read data
    or data block after write. If cache miss then check the dirty bit of replaced line and begin
    write back and refill. Write back and refill processes are in sequence. Write back and refill
    use wrap burst to transfer data.
    State Machine:
    s_idle:       begin memory request for mmio\write back\refill, or commit when read hit.
    s_wb:         transfer write back burst data.
    s_refill_req: begin memory read request after s_wb.
    s_refill:     read refill data to buffer, send ok to CPU when target word comes.
    s_commit:     this states indicate transaction is done, stage1 can read data array now.
*/
class ysyx_22051110_CacheStage3(config: CacheConfig) extends Module with HasCacheStage3Const{
    val io = IO(new Bundle{
        val cpu      = Flipped(new CPUMemRespBundle(config.w))
        val s2_to_s3 = Flipped(Decoupled(new CacheStage2to3Bundle(config)))
        val wt       = new Bundle{
            val en    = Output(Bool())
            val way   = Output(UInt(config.ways_width.W))
            val index = Output(UInt(config.index_width.W))
            val line  = Output(new CacheLineBundle(config.w, config.tag_width, config.block_word_n))
        }
        val mem_out  = new CPUMemBundle(config.w, config.block_size * 8)
        //fence.i
        val do_fencei  = Output(Bool())
        val meta_flush = Output(Bool())
        val rd         = new Bundle{
            val en    = Output(Bool())
            val index = Output(UInt(config.index_width.W))
        }
        val rd_lines   = Input(Vec(config.nr_ways,
            new CacheLineBundle(config.w, config.tag_width, config.block_word_n)))
    })
    val s3_ready_go    = Wire(Bool())
    val s3_valid       = RegInit(0.B)
    io.s2_to_s3.ready := (!s3_valid || s3_ready_go)
    when(io.s2_to_s3.ready){
        s3_valid := io.s2_to_s3.valid
    }
    //Reg Buffer
    val buf            = RegInit(0.U.asTypeOf(new CacheStage2to3Bundle(config)))
    when(io.s2_to_s3.fire){
        buf := io.s2_to_s3.bits
    }
    val state        = RegInit(s_idle.U(nr_state.W))
    val cnt          = RegInit(0.U(log2Ceil(config.block_word_n).W))
    val cnt_hit      = Wire(Vec(config.block_word_n, Bool())) //current cnt word index
    //write data
    val write_line   = Wire(new CacheLineBundle(config.w, config.tag_width, config.block_word_n))
    val mmio_wblock  = Wire(Vec(config.block_word_n, UInt(config.w.W)))
    //when write back, use word counter( buf.offset() is word-align )
    val cpu_word_idx = buf.offset(config.offset_width - 1, log2Ceil(config.w / 8))
    val cpu_req_addr = Cat(0.U((config.w - config.cache_addr_w).W), buf.tag, buf.index, buf.offset)

    //fence.i module
    val fenceiModule = Module(new ysyx_22051110_CacheFencei(config))
    fenceiModule.io.req.valid         := state(0) & s3_valid & buf.fencei
    fenceiModule.io.ret.ready         := state(6) & s3_valid & buf.fencei
    fenceiModule.io.rd_lines          := io.rd_lines // fence.i read meta ret
    fenceiModule.io.mem_out.req.ready := io.mem_out.req.ready
    fenceiModule.io.mem_out.ret       := io.mem_out.ret
    fenceiModule.io.mem_out.rlast     := io.mem_out.rlast
    io.rd         := fenceiModule.io.rd              // fence.i read meta req
    io.do_fencei  := state(6) & s3_valid & buf.fencei
    io.meta_flush := fenceiModule.io.meta_flush  // fence.i clear valid bits


    // -------------------------------- word select --------------------------------

    val cpu_word_sel       = Wire(Vec(config.block_word_n, Bool()))
    val cpu_word_mask_vec  = Wire(Vec(config.w / 8, UInt(8.W)))
    for( i <- 0 until config.block_word_n) { cpu_word_sel(i) := cpu_word_idx === i.U}
    for( i <- 0 until (config.w / 8)) { cpu_word_mask_vec(i) := Mux(buf.wstrb(i) === 1.U, 0xff.U, 0.U)}
    val cpu_word_mask      = cpu_word_mask_vec.reverse.reduce((a, b) => Cat(a, b))
    val masked_wtline_data = Wire(Vec(config.block_word_n, UInt(config.w.W)))
    val wdata_src          = Wire(Vec(config.block_word_n, UInt(config.w.W)))
    for( i <- 0 until config.block_word_n) {
        wdata_src(i)          := Mux(state(0), buf.target_line.data(i), io.mem_out.ret.rdata)
        masked_wtline_data(i) := (wdata_src(i) & ~cpu_word_mask) | (buf.wdata & cpu_word_mask)
    }
    // -------------------------------- Hit --------------------------------

    val hit         = (buf.hit === 1.U) && state(0) && s3_valid
    val read_hit    = hit && (buf.wr === 0.U)
    val write_hit   = hit && (buf.wr === 1.U)
    // -------------------------------- Write Back --------------------------------

    val wb_en       = buf.target_line.valid & buf.target_line.dirty & !hit & state(0) & s3_valid & ~buf.mthrough // need write back
    // val wb_addr     = Cat(0.U((config.w - config.cache_addr_w).W), buf.target_line.tag, buf.index, buf.offset)
    val wb_addr     = Cat(0.U((config.w - config.cache_addr_w).W), buf.target_line.tag, buf.index,
                            buf.offset(log2Ceil(config.block_size) - 1, log2Ceil(config.w/8)),
                            0.U(log2Ceil(config.w/8).W))
    val burst_last  = io.mem_out.ret.valid && (state(1) === 1.U || io.mem_out.rlast)
    // -------------------------------- Refill --------------------------------

    val refill_come   = (state(3) & io.mem_out.ret.valid) === 1.U
    val refill_whit   = cnt_hit(cpu_word_idx)
    //refill and write hit (set new data in target_line.data)
    for( i <- 0 until config.block_word_n){
        //when refill, cover word with data or
        when(refill_come && cnt_hit(i)) {
            buf.target_line.data(i) := write_line.data(i)
        }
    }
    // -------------------------------- Burst counter --------------------------------
    for( i <- 0 until config.block_word_n) { cnt_hit(i) := cnt === i.U }

    val cnt_max = Fill(config.offset_width - log2Ceil(8), 1.U(1.W))
    when((wb_en === 1.U) && io.mem_out.req.fire){ // when wb request ok
        cnt := 0.U
    } .elsewhen((state(2) | (state(0) & ~wb_en )) === 1.U && io.mem_out.req.fire){ // when refill request ok
        cnt := cpu_word_idx //the request word will be transmitted first to accelerate
    } .elsewhen(io.mem_out.ret.valid){
        cnt := Mux(cnt === cnt_max, 0.U, cnt + 1.U)
    }
    // -------------------------------- memory read/write --------------------------------

    val stage3_mem_req       = Wire(new CPUMemReqBundle(config.w, config.block_size * 8))
    val stage3_mem_req_valid = Wire(Bool())
    stage3_mem_req_valid    := s3_valid & ((state(0) & ~hit & ~buf.fencei) | state(2)) //miss or after wb
    stage3_mem_req.wr       := wb_en | (buf.mthrough & buf.wr) //wb or mmio write
    stage3_mem_req.addr     := Mux(wb_en === 1.U, wb_addr, cpu_req_addr)
    stage3_mem_req.size     := Mux(buf.mthrough === 1.U, buf.size, 3.U)
    stage3_mem_req.wdata    := Mux(buf.mthrough === 1.U, mmio_wblock.reverse.reduce((a, b) => Cat(a, b)),
                                                              buf.target_line.data.reverse.reduce((a, b) => Cat(a, b)) )
    stage3_mem_req.wstrb    := Mux(buf.mthrough === 1.U, buf.wstrb, Fill(((config.w) / 8), 1.U(1.W)))
    stage3_mem_req.mthrough := buf.mthrough
    stage3_mem_req.fencei   := 0.B

    io.mem_out.req.valid         := Mux(state(6), fenceiModule.io.mem_out.req.valid, stage3_mem_req_valid)
    // io.mem_out.req.bits  := Mux(state(6), fenceiModule.io.mem_out.req.bits, stage3_mem_req)
    io.mem_out.req.bits.wr       := Mux(state(6), fenceiModule.io.mem_out.req.bits.wr, stage3_mem_req.wr)
    io.mem_out.req.bits.addr     := Mux(state(6), fenceiModule.io.mem_out.req.bits.addr, stage3_mem_req.addr)
    io.mem_out.req.bits.size     := Mux(state(6), fenceiModule.io.mem_out.req.bits.size, stage3_mem_req.size)
    io.mem_out.req.bits.wdata    := Mux(state(6), fenceiModule.io.mem_out.req.bits.wdata, stage3_mem_req.wdata)
    io.mem_out.req.bits.wstrb    := Mux(state(6), fenceiModule.io.mem_out.req.bits.wstrb, stage3_mem_req.wstrb)
    io.mem_out.req.bits.mthrough := Mux(state(6), fenceiModule.io.mem_out.req.bits.mthrough, stage3_mem_req.mthrough)
    io.mem_out.req.bits.fencei   := 0.B

    // -------------------------------- mmio write --------------------------------

    for( i <- 0 until config.block_word_n){
        mmio_wblock(i) := Mux(cpu_word_sel(i), buf.wdata, 0.U)
    }

    // -------------------------------- write to cache line --------------------------------

    io.wt.en    := s3_valid & ((state(0) & write_hit) | (state(3) & burst_last))
    io.wt.way   := buf.target_way
    io.wt.index := buf.index
    io.wt.line  := write_line
    write_line.valid := 1.B
    write_line.dirty := buf.wr
    write_line.tag   := buf.tag
    val write_line_sel = Seq.fill(config.block_word_n) { Wire(Vec(3, Bool())) }

    for( i <- 0 until config.block_word_n) {
        //write hit not target word / write and read refill is already buffered to reg
        write_line_sel(i)(0) := (write_hit && ~cpu_word_sel(i)) || (state(3) && ~cnt_hit(i))
        //read refill not buffered word
        write_line_sel(i)(1) := state(3) && cnt_hit(i) && (buf.wr === 0.U || (buf.wr === 1.U && ~cpu_word_sel(i)))
        //write hit target word / write refill target word
        write_line_sel(i)(2) := (write_hit && cpu_word_sel(i)) ||
                                (state(3) && cnt_hit(i) && cpu_word_sel(i) && buf.wr === 1.U)
        write_line.data(i) := Mux1H(Seq(
            write_line_sel(i)(0) -> buf.target_line.data(i),
            write_line_sel(i)(1) -> io.mem_out.ret.rdata,
            write_line_sel(i)(2) -> masked_wtline_data(i)
        ))
    }

    // -------------------------------- state machine --------------------------------
    state := Mux1H(Seq(
        /* IDLE       */ state(0) -> Mux(buf.fencei.asBool(), Mux(fenceiModule.io.req.fire, s_wait_fencei.U, s_idle.U),
                                            Mux(hit, Mux(buf.wr === 1.U, s_commit.U, s_idle.U),
                                                    Mux(!io.mem_out.req.fire, s_idle.U,
                                                        Mux(buf.mthrough === 1.U, s_mmio.U,
                                                            Mux(wb_en === 1.U, s_wb.U, s_refill.U))
                                                    )
                                            )
                                    ),
        /* WB         */ state(1) -> Mux(burst_last, s_refill_req.U, s_wb.U),
        /* REFILL REQ */ state(2) -> Mux(io.mem_out.req.fire, s_refill.U, s_refill_req.U),
        /* REFILL     */ state(3) -> Mux(burst_last, s_commit.U, s_refill.U),
        /* MMIO       */ state(4) -> Mux(io.mem_out.ret.valid, s_idle.U, s_mmio.U),
        /* COMMIT     */ state(5) -> (s_idle.U),
        /* WAIT FENCEI */state(6) -> Mux(fenceiModule.io.ret.fire, s_idle.U, s_wait_fencei.U),
    ))
    s3_ready_go := (hit && (buf.wr === 0.U)) ||           //read hit
                   (state(4) && io.mem_out.ret.valid)  || //mmio
                   (state(5) === 1.U) ||                  //refill/write commit
                   (state(6) && fenceiModule.io.ret.fire) //fencei
    // -------------------------------- CPU commit --------------------------------

    io.cpu.rdata   := Mux(hit, buf.target_line.data(cpu_word_idx),
                        Mux(state(4), io.mem_out.ret.rdata, write_line.data(cpu_word_idx)) )
    io.cpu.valid   := s3_valid && Mux(buf.fencei.asBool(), (state(6) && fenceiModule.io.ret.fire),
                                        Mux(hit, 1.B, Mux(state(4), io.mem_out.ret.valid, refill_whit & refill_come) )
                                    )
}

/*
Stage-fence.i: Write back dirty blocks in DCache & Invalidate blocks in ICache
        This module is not a part of common cache pipeline. This module is enabled only when fence.i request
    flows to CacheStage3. For D$, traverse every blocks and write them back to memory one by one. For I$, set
    signal to cache meta data and set all valid bit in meta data to 0.
    State Machine:
    s_idle:       wait fence.i request from cache stage3
    s_clear_v:    clear all valid bits in I$
    s_rd_meta:    send read request to D$ meta data
    s_wb_ret:     writeback request
    s_wb_ret:     wait for writeback request
*/
class ysyx_22051110_CacheFencei(config: CacheConfig) extends Module with HasCacheFenceiConst{
    val io = IO(new Bundle{
        val req = Flipped(Decoupled())
        val ret = Decoupled()
        // I$ flush
        val meta_flush = Output(Bool())
        // D$ write back
        val rd = new Bundle{
            val en    = Output(Bool())
            val index = Output(UInt(config.index_width.W))
        }
        val rd_lines = Input(Vec(config.nr_ways,
            new CacheLineBundle(config.w, config.tag_width, config.block_word_n)))
        val mem_out  = new CPUMemBundle(config.w, config.block_size * 8)
    })
    val state        = RegInit(s_idle.U(nr_state.W))

    val wb_done      = Wire(Bool())
    val wb_index_done = Wire(Bool())
    val wb_index     = RegInit(0.U((config.index_width + 1).W))
    val wb_way       = RegInit(0.U((config.ways_width + 1).W))
    val wb_way_sel   = Wire(UInt(config.ways_width.W))
    val wb_index_sel = Wire(UInt(config.index_width.W))
    val wb_req_done  = Wire(Bool())
    val wb_ret_done  = Wire(Bool())
    val wb_flag      = RegInit(0.B)

    io.req.ready := state(0)
    io.ret.valid := state(1)

    // D$ write back
    wb_done       := state(2) && (wb_index === config.nr_lines.U) // scanned all cache lines
    wb_index_done := state(4) && (wb_way === config.nr_ways.U)    // scanned all current line set
    wb_index_sel  := wb_index(config.index_width - 1, 0)          // current index of line set
    wb_way_sel    := wb_way(config.ways_width - 1, 0)             // current way of line set

    when(io.req.fire) {
        wb_index := 0.U
    } .elsewhen(wb_index_done && wb_ret_done) {
        wb_index := wb_index + 1.U
    }

    when(state(2)) {
        wb_way := 0.U
    } .elsewhen(wb_req_done) {
        wb_way := wb_way + 1.U
    }

    io.rd.en := state(2) && !wb_done
    io.rd.index := wb_index_sel

    io.mem_out.req.valid         := state(3) & io.rd_lines(wb_way_sel).dirty
    io.mem_out.req.bits.wr       := 1.B
    io.mem_out.req.bits.addr     := Cat(0.U((config.w - config.cache_addr_w).W),
                                        io.rd_lines(wb_way_sel).tag,
                                        wb_index_sel,
                                        0.U(config.offset_width.W))
    io.mem_out.req.bits.wdata    := io.rd_lines(wb_way_sel).data.reverse.reduce((a, b) => Cat(a, b))

    io.mem_out.req.bits.wstrb    := Fill(((config.w) / 8), 1.U(1.W))
    io.mem_out.req.bits.mthrough := 0.B
    io.mem_out.req.bits.fencei   := 1.B
    io.mem_out.req.bits.size     := 3.U

    wb_req_done := state(3) && Mux(io.mem_out.req.valid, io.mem_out.req.fire, 1.B)
    when(wb_req_done) {
        wb_flag := io.mem_out.req.valid
    }
    wb_ret_done := state(4) && Mux(wb_flag, io.mem_out.ret.valid, 1.B)

    // I$ clear valid
    io.meta_flush := state(1)

    state := Mux1H(Seq(
        /* IDLE    */ state(0) -> Mux(io.req.fire, s_rd_meta.U, s_idle.U),
        /* CLEAR_V */ state(1) -> s_idle.U,
        /* RD_META */ state(2) -> Mux(wb_done, s_clear_v.U, s_wb_req.U),
        /* WB_REQ  */ state(3) -> Mux(wb_req_done, s_wb_ret.U, s_wb_req.U),
        /* WB_RET  */ state(4) -> Mux(wb_ret_done,
                                    Mux(wb_index_done, s_rd_meta.U, s_wb_req.U),
                                    s_wb_ret.U),
    ))
}