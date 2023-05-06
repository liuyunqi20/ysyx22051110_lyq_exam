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

class CacheConfig(val w: Int, val tag_width: Int, val nr_lines: Int, 
                  val nr_ways: Int, val block_size: Int){
    val block_word_n: Int = CacheTop.getBlockWordsNum(w, block_size)
    val index_width:  Int = CacheTop.getIndexWidth(nr_lines)
    val offset_width: Int = CacheTop.getOffsetWidth(block_size)
    val ways_width:   Int = CacheTop.getWaysWidth(nr_ways)
    val cache_addr_w: Int = tag_width + index_width + offset_width
}

class CacheDataRam extends Module{
    val word_depth = 64
    val addr_w     = 6
    val io = IO(new Bundle{
        val Q    = Output(UInt(128.W))
        val CEN  = Input(Bool())
        val WEN  = Input(Bool())
        val BWEN = Input(UInt(128.W))
        val A    = Input(UInt(addr_w.W))
        val D    = Input(UInt(128.W))
    })
    val cen = !(io.CEN)
    val wen = !(io.WEN)
    val bwen = ~(io.BWEN);
    val ram = RegInit(VecInit( Seq.fill(word_depth)(0.U(128.W)) ))
    val rdata = Reg(UInt(128.W))
    when(cen && wen){
        ram(io.A) := (io.D & bwen) | (ram(io.A) & ~bwen)
    }
    when(cen && !wen){
        rdata := ram(io.A)
    }
    io.Q := rdata
}

class CacheTop(w: Int, tag_w: Int, nr_lines: Int, nr_ways: Int, block_size: Int) extends Module with HasCacheConst{
    val io = IO(new Bundle{
        val in  = Flipped(new CPUMemBundle(w))
        val out = new CPUMemBundle(w)
    })

    val config = new CacheConfig(w, tag_w, nr_lines, nr_ways, block_size)
    val stage1 = Module(new CacheStage1(config))
    val stage2 = Module(new CacheStage2(config))
    val stage3 = Module(new CacheStage3(config))
    val cache_data = Vec(nr_ways, Module(new CacheDataRam))
    val cache_meta = RegInit(Vec(nr_ways, 
                                Vec(nr_lines, 
                                    CacheTop.getCacheMeta(config.tag_width))
                                    )
                                )
    val meta_rd  = RegInit(Vec(nr_ways, CacheTop.getCacheMeta(config.tag_width)))
    when(stage1.io.rd.en){
        for( i <- 0 until nr_ways){
            meta_rd(i).valid := cache_meta(i)(stage1.io.rd.index).valid
            meta_rd(i).dirty := cache_meta(i)(stage1.io.rd.index).dirty
            meta_rd(i).tag   := cache_meta(i)(stage1.io.rd.index).tag
        }
    }
    //read
    val data_wt_addr = Cat(0.U(cache_data.addr_w - config.index_width), stage3.io.wt.index)
    val data_rd_addr = Cat(0.U(cache_data.addr_w - config.index_width), stage1.io.rd.index)
    val data_addr    = Mux(stage3.io.wt.en, data_wt_addr, data_rd_addr)
    val data_wdata   = stage3.io.line.data.reduce((a, b) => Cat(a, b))
    val data_sel     = Wire(Vec(nr_ways, Bool()))
    for( i <- 0 until nr_ways){
        data_sel(i)           := (stage1.io.rd.index === i.U) || (stage3.io.wt.index === i.U) 
        cache_data(i).io.CEN  := stage1.io.rd.en || stage3.io.wt.en
        cache_data(i).io.WEN  := stage3.io.wt.en
        cache_data(i).io.BWEN := Fill(128, 1.U)
        cache_data(i).io.A    := data_addr
        cache_data(i).io.D    := data_wdata
    }
    for( i <- 0 until nr_ways){
        stage2.io.rd_lines(i) := Cat(meta_rd.valid, 
                                     meta_rd.dirty,
                                     meta_rd.tag,
                                     cache_data(i).io.Q)
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
    def getBlockWordsNum = (w: Int, block_size: Int) => ((block_size * 8) / w)
    def getIndexWidth  = (n: Int) => log2Ceil(n)
    def getOffsetWidth = (n: Int) => log2Ceil(n)
    def getWaysWidth   = (n: Int) => log2Ceil(n)
    def getCacheMeta(tag_width: Int) = {
        val bundle = Wire(new CacheMetaBundle(tag_width))
        bundle.valid := 0.U
        bundle.dirty := 0.U
        bundle.tag   := 0.U
        bundle
    }
}