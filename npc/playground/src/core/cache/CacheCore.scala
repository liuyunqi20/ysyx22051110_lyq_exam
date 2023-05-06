package mycpu
import chisel3._
import chisel3.util._

class CacheStage1(config: CacheConfig) extends Module{
    val io = IO(new Bundle{
        val cpu      = Flipped(Decoupled(new CPUMemReqBundle(config.w)))
        val rd       = new Bundle{
            val en    = Output(Bool())
            val index = Output(UInt(config.index_width.W))
        }
        val s1_to_s2 = Decoupled(new CacheStage1to2Bundle(config))
    })
    val tag      = io.cpu.bits.addr(config.w - 1, config.w - config.tag_width)
    val index    = io.cpu.bits.addr(config.index_width + config.offset_width - 1, config.offset_width)
    val offset   = io.cpu.bits.addr(config.offset_width - 1, 0)
    io.rd.en    := io.s1_to_s2.fire
    io.rd.index := index
    io.s1_to_s2.valid         := io.cpu.valid
    io.s1_to_s2.bits.wr       := io.cpu.bits.wr
    io.s1_to_s2.bits.wdata    := io.cpu.bits.wdata
    io.s1_to_s2.bits.wstrb    := io.cpu.bits.wstrb
    io.s1_to_s2.bits.mthrough := io.cpu.bits.mthrough
    io.s1_to_s2.bits.tag      := tag
    io.s1_to_s2.bits.index    := index
    io.s1_to_s2.bits.offset   := offset
    io.cpu.ready := io.s1_to_s2.fire
}

class CacheStage2(config: CacheConfig) extends Module{
    val io = IO(new Bundle{
        val s1_to_s2 = Flipped(Decoupled(new CacheStage1to2Bundle(config)))
        //cache read set
        val rd_lines = Input(Vec(config.nr_ways, 
            new CacheLineBundle(config.w, config.tag_width, config.block_word_n)))
        val s2_to_s3 = Decoupled(new CacheStage2to3Bundle(config))
    })
    val s2_ready_go        = 1.B
    val s2_valid           = RegInit(0.B)
    io.s1_to_s2.ready := (!s2_valid || (s2_ready_go && io.s2_to_s3.ready))
    when(io.s1_to_s2.ready){
        s2_valid := io.s1_to_s2.valid
    }
    //buffer (stage 1 to 2 reg)
    val buf        = RegInit(0.U.asTypeOf(new CacheStage1to2Bundle(config)))
    when(io.s1_to_s2.fire){
        buf       := io.s1_to_s2.bits
    }
    //hit check
    var hit1H = Wire(UInt((config.nr_ways).W));
    for( i <- 0 until config.nr_ways){
        hit1H(i) := (buf.tag === io.rd_lines(i).tag)
    }
    val hit = hit1H.orR
    //replace choose
    val replace1H = RegInit(1.U(config.nr_ways.W))  //ring shift register
    replace1H := Cat(replace1H(config.nr_ways - 2, 0), replace1H(config.nr_ways - 1))
    //to stage3
    val target_way1H = Mux(hit, hit1H, replace1H) //choosed bit array for hit/replace
    io.s2_to_s3.valid := (s2_valid && s2_ready_go)
    io.s2_to_s3.bits.wr           := buf.wr
    io.s2_to_s3.bits.wdata        := buf.wdata
    io.s2_to_s3.bits.wstrb        := buf.wstrb
    io.s2_to_s3.bits.mthrough     := buf.mthrough
    io.s2_to_s3.bits.index        := buf.index
    io.s2_to_s3.bits.tag          := buf.tag
    io.s2_to_s3.bits.offset       := buf.offset
    io.s2_to_s3.bits.hit          := hit
    io.s2_to_s3.bits.target_way   := OHToUInt(target_way1H)
    io.s2_to_s3.bits.target_line  := Mux1H( for( i <- 0 until config.nr_ways) yield (target_way1H(i) -> io.rd_lines(i)) )
}

class CacheStage3(config: CacheConfig) extends Module with HasCacheStage3Const{
    val io = IO(new Bundle{
        val cpu      = Flipped(new CPUMemRespBundle(config.w))
        val s2_to_s3 = Flipped(Decoupled(new CacheStage2to3Bundle(config)))
        val wt = new Bundle{
            val en    = Output(Bool())
            val way   = Output(UInt(config.ways_width.W))
            val index = Output(UInt(config.index_width.W))
            val line  = new CacheLineBundle(config.w, config.tag_width, config.block_word_n)
        }
        val mem_out  = new CPUMemBundle(config.w)
    })
    val s3_ready_go    = Wire(Bool())
    val s3_valid       = RegInit(0.B)
    io.s2_to_s3.ready := (!s3_valid || s3_ready_go)
    when(io.s2_to_s3.ready){
        s3_valid := io.s2_to_s3.valid
    }
    //Reg Buffer
    val buf            = RegInit(0.U.asTypeOf(new CacheStage2to3Bundle(config)))
    val refill_buf     = RegInit(VecInit(Seq.fill(config.block_word_n)(0.U(config.w.W))))
    when(io.s2_to_s3.fire){
        buf := io.s2_to_s3.bits
    }
    val state       = RegInit(s_idle.U(nr_state.W))
    val cnt         = RegInit(0.U(log2Ceil(config.block_word_n).W))
    //when write back, use word counter( buf.offset() is word-align )
    val block_idx   = buf.offset(config.offset_width - 1, log2Ceil(config.w / 8))
    val word_cnt    = Mux(state(1), cnt, block_idx)  
    // -------------------------------- word select -------------------------------- 
    val target_word = Mux(state(3),  //when refill ok, return rdata from refill buffer
                        refill_buf(word_cnt),
                        buf.target_line.data(word_cnt))
    // -------------------------------- Hit --------------------------------
    val hit         = (buf.hit === 1.U) && state(0)
    // -------------------------------- Write Back --------------------------------
    val wb_en       = buf.target_line.valid & buf.target_line.dirty & !hit & state(0)// need write back
    val wb_addr     = Cat(0.U((config.w - config.cache_addr_w).W), buf.target_line.tag, buf.index, 0.U(config.offset_width.W))
    val burst_last  = io.mem_out.ret.valid && io.mem_out.ret.last
    // -------------------------------- Refill --------------------------------
    val refill_addr = Cat(0.U((config.w - config.cache_addr_w).W), buf.tag, buf.index, 0.U(config.offset_width.W))
    // -------------------------------- Burst counter --------------------------------
    when(((wb_en | state(2)) === 1.U) && io.mem_out.req.ready){ // when wb and refill request ok
        cnt := 0.U
    } .elsewhen(io.mem_out.ret.valid){
        cnt := cnt + 1.U
    }
    // -------------------------------- memory read/write --------------------------------
    io.mem_out.req.valid         := s3_valid && (hit || (state(1) && burst_last))
    io.mem_out.req.bits.wr       := state(1)
    io.mem_out.req.bits.addr     := Mux(state(0), wb_addr, refill_addr)
    io.mem_out.req.bits.wdata    := target_word
    io.mem_out.req.bits.wstrb    := Fill(((config.w) / 8), 1.U(1.W))
    io.mem_out.req.bits.mthrough := buf.mthrough
    // -------------------------------- write to cache line --------------------------------
    io.wt.en    := s3_valid & ((state(0) & buf.hit & buf.wr) | (state(2) & burst_last))
    io.wt.way   := buf.target_way
    io.wt.index := buf.index
    val write_line = Wire(Vec(config.block_word_n, UInt(config.w.W)))
    for( i <- 0 until config.block_word_n){
        //TODO: wstrb when write
        write_line(i) := Mux(target_word === i.U, 0.U(config.w.W), Mux(hit, buf.target_line.data(i), refill_buf(i)))                
    }
    io.wt.line  := write_line

    state := Mux1H(Seq(
        /* IDLE       */ state(0) -> Mux(hit, s_idle.U, 
                                        Mux(buf.mthrough === 1.U, s_mmio.U, 
                                            Mux(io.mem_out.req.fire, s_wb.U, s_refill.U))
                                    ),
        /* WB         */ state(1) -> Mux(burst_last, s_refill_req.U, s_wb.U),
        /* REFILL REQ */ state(2) -> Mux(io.mem_out.req.fire, s_refill.U, s_refill_req.U),
        /* REFILL     */ state(3) -> Mux(burst_last, s_idle.U, s_refill.U),
        /* MMIO       */ state(4) -> Mux(io.mem_out.ret.valid, s_idle.U, s_mmio.U),
    ))
    s3_ready_go := hit ||                                //hit
                 (state(3) && burst_last) ||            //miss(refill)
                 (state(4) && io.mem_out.ret.valid) //mmio
    // -------------------------------- CPU commit -------------------------------- 
    io.cpu.rdata   := Mux(state(4), io.mem_out.ret.rdata, target_word)
    io.cpu.valid   := io.mem_out.ret.last
    io.cpu.last    := io.cpu.valid
}