package mycpu
import chisel3._
import chisel3.util._

trait HasCacheConst{
    val nr_state   = 3
    val s_idle     = 0x1
    val s_hitcheck = 0x2
    val s_refill   = 0x4
}

trait HasCacheStage3Const{
    val nr_state     = 5
    val s_idle       = 0x01
    val s_wb         = 0x02
    val s_refill_req = 0x04
    val s_refill     = 0x08
    val s_mmio       = 0x10
}

class CacheConfig(val w: Int, val nr_lines: Int, val nr_ways: Int, val block_size: Int){
    val tag_width:    Int = CacheTop.getTagWidth(w, nr_lines, block_size)
    val index_width:  Int = CacheTop.getIndexWidth(nr_lines)
    val offset_width: Int = CacheTop.getOffsetWidth(block_size)
    val ways_width:   Int = CacheTop.getWaysWidth(nr_ways)
}

class CacheStage1(config: CacheConfig) extends Module{
    val io = IO(new Bundle{
        val cpu      = Flipped(Decoupled(new CPUMemReqBundle(config.w)))
        val rd_index = Output(UInt(config.index_width.W))
        val rd_lines = Vec(config.nr_ways, 
                new CacheLineBundle(config.w, config.tag_width, config.block_size))
        val s1_to_s2 = Decoupled(new CacheStage1to2Bundle(config))
    })
    val tag      = io.cpu.bits.addr(config.w - 1, config.w - config.tag_width)
    val index    = io.cpu.bits.addr(config.index_width + config.offset_width - 1, config.offset_width)
    val offset   = io.cpu.bits.addr(config.offset_width - 1, 0)
    io.rd_index := index
    io.s1_to_s2.valid         := io.cpu.valid
    io.s1_to_s2.bits.wr       := io.cpu.bits.wr
    io.s1_to_s2.bits.wdata    := io.cpu.bits.wdata
    io.s1_to_s2.bits.wstrb    := io.cpu.bits.wstrb
    io.s1_to_s2.bits.mthrough := io.cpu.bits.mthrough
    io.s1_to_s2.bits.tag      := tag
    io.s1_to_s2.bits.index    := index
    io.s1_to_s2.bits.offset   := offset
    for( i <- 0 until config.nr_ways){
        io.s1_to_s2.bits.rd_lines(i) <> io.rd_lines(i)
    }
    io.cpu.ready := io.s1_to_s2.fire
}

class CacheStage2(config: CacheConfig) extends Module{
    val io = IO(new Bundle{
        val s1_to_s2 = Flipped(Decoupled(new CacheStage1to2Bundle(config)))
        val s2_to_s3 = Decoupled(new CacheStage2to3Bundle(config))
    })
    val s2_ready_go        = 1.B
    val s2_valid           = RegInit(0.B)
    io.s1_to_s2.ready := (!s2_valid || (s2_ready_go && io.s2_to_s3.ready))
    when(io.s1_to_s2.ready){
        s2_valid := io.s1_to_s2.valid
    }
    //buffer (stage 1 to 2 reg)
    val rd_buf = RegInit(Vec(config.nr_ways, Seq(
            /* V    */ 0.U(1.W),
            /* D    */ 0.U(1.W),
            /* TAG  */ 0.U(config.tag_width.W),
            /* DATA */ 0.U((config.block_size * 8).W),
    )))
    val wr_r       = RegInit(0.B)
    val wdata_r    = RegInit(0.U(config.w.W))
    val wstrb_r    = RegInit(0.U((config.w / 8).W))
    val mthrough_r = RegInit(0.B)
    val tag_r      = RegInit(0.U(config.tag_width.W))
    val index_r    = RegInit(0.U(config.index_width.W))
    val offset_r   = RegInit(0.U(config.offset_width.W))
    when(io.s1_to_s2.fire){
        wr_r       := io.s1_to_s2.bits.wr
        wdata_r    := io.s1_to_s2.bits.wdata
        wstrb_r    := io.s1_to_s2.bits.wstrb
        mthrough_r := io.s1_to_s2.bits.mthrough
        tag_r      := io.s1_to_s2.bits.tag
        index_r    := io.s1_to_s2.bits.index
        offset_r   := io.s1_to_s2.bits.offset
        for( i <- 0 until config.nr_ways){
            rd_buf(i) := io.s1_to_s2.bits.rd_lines(i)
        }
    }
    //hit check
    val hit1H = Wire(UInt((config.nr_ways).W));
    for( i <- 0 until config.nr_ways){
        hit1H(i) := (tag_r === rd_buf(i)(2))
    }
    val hit = hit1H.orR
    //replace choose
    val replace1H = RegInit(1.U(config.nr_ways.W))  //ring shift register
    replace1H := Cat(replace1H(config.nr_ways - 2, 0), replace1H(config.nr_ways - 1))
    //to stage3
    val target_way1H = Mux(hit, hit1H, replace1H) //choosed bit array for hit/replace
    io.s2_to_s3.valid := (s2_valid && s2_ready_go)
    io.s2_to_s3.bits.wr           := wr_r
    io.s2_to_s3.bits.wdata        := wdata_r
    io.s2_to_s3.bits.wstrb        := wstrb_r
    io.s2_to_s3.bits.mthrough     := mthrough_r
    io.s2_to_s3.bits.index        := index_r
    io.s2_to_s3.bits.tag          := tag_r
    io.s2_to_s3.bits.offset       := offset_r
    io.s2_to_s3.bits.hit          := hit
    io.s2_to_s3.bits.target_way   := OHToUInt(target_way1H)
    io.s2_to_s3.bits.target_line  <> Mux1H( for( i <- 0 until config.nr_ways) yield (target_way1H(i) -> rd_buf(i)) )
}

class CacheStage3(config: CacheConfig) extends Module with HasCacheStage3Const{
    val io = IO(new Bundle{
        val cpu      = Flipped(new CPUMemRespBundle(config.w))
        val s2_to_s3 = Flipped(Decoupled(new CacheStage2to3Bundle(config)))
        val wt = new Bundle{
            val wt_en    = Output(Bool())
            val wt_way   = Output(UInt(config.ways_width.W))
            val wt_index = Output(UInt(config.index_width.W))
            val wt_line  = new CacheLineBundle(config.w, config.tag_width, config.block_size)
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
    val wr_r           = RegInit(0.B)
    val wdata_r        = RegInit(0.U((config.w.W)))
    val wstrb_r        = RegInit(0.U((config.w / 8).W))
    val mthrough_r     = RegInit(0.B)
    val tag_r          = RegInit(0.U(config.tag_width.W))
    val index_r        = RegInit(0.U(config.index_width.W))
    val offset_r       = RegInit(0.U(config.offset_width.W))
    val hit_r          = RegInit(0.B)
    val target_way_r   = RegInit(0.U(config.ways_width.W))
    val refill_buf     = RegInit(0.U((config.block_size * 8).W))
    val target_line_r  = RegInit(VecInit(Seq(
            /* V    */ 0.U(1.W),
            /* D    */ 0.U(1.W),
            /* TAG  */ 0.U(config.tag_width.W),
            /* DATA */ 0.U((config.block_size * 8).W),
        )))
    when(io.s2_to_s3.fire){
        wr_r           := io.s2_to_s3.bits.wr
        wdata_r        := io.s2_to_s3.bits.wdata
        wstrb_r        := io.s2_to_s3.bits.wstrb
        mthrough_r     := io.s2_to_s3.bits.mthrough
        tag_r          := io.s2_to_s3.bits.tag
        index_r        := io.s2_to_s3.bits.index
        offset_r       := io.s2_to_s3.bits.offset
        hit_r          := io.s2_to_s3.bits.hit
        target_way_r   := io.s2_to_s3.bits.target_way
        target_line_r  := io.s2_to_s3.bits.target_line
    }
    val state       = RegInit(s_idle.U(nr_state.W))
    val cnt         = RegInit(0.U(log2Ceil( config.block_size * 8 / config.w ).W))
    //when write back, use word counter( offset_r is word-align )
    val word_cnt    = Mux(state(1), cnt, offset_r(config.offset_width - 1, log2Ceil(config.w / 8)))  
    // -------------------------------- word select -------------------------------- 
    val target_word = Mux(state(3),  //when refill ok, return rdata from refill buffer
                        refill_buf((word_cnt + 1.U) * config.w.asUInt - 1.U, word_cnt * config.w.asUInt),
                        target_line_r(3)((word_cnt + 1.U) * config.w.asUInt - 1, word_cnt * config.w.asUInt))
    // -------------------------------- Hit --------------------------------
    val hit         = hit_r && state(0)
    // -------------------------------- Write Back --------------------------------
    val wb_en       = target_line_r(0) && target_line_r(1) && !hit_r && state(0)// need write back
    val wb_addr     = Cat(target_line_r(2), index_r, 0.U(config.offset_width.W))
    val burst_last  = io.mem_out.ret.valid && io.mem_out.ret.last
    // -------------------------------- Refill --------------------------------
    val refill_addr = Cat(tag_r, index_r, 0.U(config.offset_width.W))
    // -------------------------------- Burst counter --------------------------------
    when((wb_en || state(2)) && io.mem_out.req.ready){ // when wb and refill request ok
        cnt := 0.U
    } .elsewhen(io.mem_out.ret.valid){
        cnt := cnt + 1.U
    }
    // -------------------------------- memory read/write --------------------------------
    io.mem_out.req.valid    := s3_valid && ((state(0) && !hit_r) || (state(1) && burst_last))
    io.mem_out.req.bits.wr       := state(1)
    io.mem_out.req.bits.addr     := Mux(state(0), wb_addr, refill_addr)
    io.mem_out.req.bits.wdata    := target_word
    io.mem_out.req.bits.wstrb    := Fill(((config.w) / 8), 1.U(1.W))
    io.mem_out.req.bits.mthrough := mthrough_r
    // -------------------------------- write to cache line --------------------------------
    io.wt.wt_en    := s3_valid && ((state(0) && hit_r && wr_r) || (state(2) && burst_last))
    io.wt.wt_way   := target_way_r
    io.wt.wt_index := index_r
    io.wt.wt_line  <> write_line //TODO link write_line

    state := Mux1H(Seq(
        /* IDLE       */ state(0) -> Mux(hit, s_idle.U, 
                                        Mux(mthrough_r, s_mmio.U, 
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

class CacheTop(w: Int, nr_lines: Int, nr_ways: Int, block_size: Int) extends Module with HasCacheConst{
    val io = IO(new Bundle{
        val in  = Flipped(new CPUMemBundle(w))
        val out = new CPUMemBundle(w)
    })

    val config = new CacheConfig(w, nr_lines, nr_ways, block_size)
    val stage1 = Module(new CacheStage1(config))
    val stage2 = Module(new CacheStage2(config))
    val stage3 = Module(new CacheStage3(config))
    val cache_mem = RegInit(Vec(nr_ways, VecInit(Seq.fill(nr_lines)(
        List(
            0.U(1.W),
            0.U(1.W),
            0.U(config.tag_width.W),
            0.U((block_size * 8).W),
        )
    ))))
    //read
    for( i <- 0 until nr_ways){
        stage1.io.rd_lines(i).valid::stage1.io.rd_lines(i).dirty::
            stage1.io.rd_lines(i).tag::stage1.io.rd_lines(i).data::Nil := cache_mem(i)(stage1.io.rd_index)
    }
    //write
    when(stage3.io.wt.wt_en){
        cache_mem(stage3.io.wt.wt_ways)(stage3.io.wt.wt_index) := List(
            stage3.io.wt.wt_line.valid,
            stage3.io.wt.wt_line.dirty,
            stage3.io.wt.wt_line.tag  ,
            stage3.io.wt.wt_line.data ,
        )
    }
    //stage connection
    stage1.io.s1_to_s2 <> stage2.io.s1_to_s2
    stage2.io.s2_to_s3 <> stage3.io.s2_to_s3
    //CPU 
    stage1.io.cpu <> io.in.req
    stage3.io.cpu <> io.in.ret
    io.out <> stage3.io.mem_out
}

object CacheTop{
    //default size is 2KB
    def apply(w: Int, nr_lines: Int = 16, nr_ways: Int = 4, block_size: Int = 32): CacheTop = 
        new CacheTop(w, nr_lines, nr_ways, block_size)
    def getTagWidth(w: Int, nr_lines: Int, block_size: Int): Int = 
        w - log2Ceil(nr_lines) - log2Ceil(block_size)
    def getIndexWidth  = (n: Int) => log2Ceil(n)
    def getOffsetWidth = (n: Int) => log2Ceil(n)
    def getWaysWidth   = (n: Int) => log2Ceil(n)
}