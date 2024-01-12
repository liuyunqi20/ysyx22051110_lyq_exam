package mycpu
import chisel3._
import chisel3.util._

class CacheDataRamV extends BlackBox{
    val io = IO(new Bundle{
        val clock = Input(Clock())
        val reset = Input(Bool())
        val Q     = Output(UInt(128.W))
        val CEN   = Input(Bool())
        val WEN   = Input(Bool())
        val BWEN  = Input(UInt(128.W))
        val A     = Input(UInt(6.W))
        val D     = Input(UInt(128.W))
    })
}

class CacheMetaRam(nr_ways: Int, nr_lines: Int, tag_width: Int) extends Module{
    val io = IO(new Bundle{
        val flush = Input(Bool())
        val en    = Input(Bool())
        val wr    = Input(Bool())
        val way   = Input(UInt(log2Ceil(nr_ways).W))
        val index = Input(UInt(log2Ceil(nr_lines).W))
        val out   = Output(Vec(nr_ways, new CacheMetaBundle(tag_width)))
        val in    = Input(new CacheMetaBundle(tag_width))
    })
    val cache_meta = Seq.fill(nr_ways) { Module(new CacheMetaRamV(tag_width)).io }
    val hit_array  = Wire(Vec(nr_ways, Bool()))
    for( i <- 0 until nr_ways) {
        hit_array(i)         := io.way === i.U || io.wr === 0.U
        cache_meta(i).clock  := clock
        cache_meta(i).reset  := reset
        cache_meta(i).flush  := io.flush
        cache_meta(i).en     := hit_array(i) && io.en
        cache_meta(i).wr     := io.wr
        cache_meta(i).addr   := io.index
        cache_meta(i).wvalid := io.in.valid
        cache_meta(i).wdirty := io.in.dirty
        cache_meta(i).wtag   := io.in.tag
        io.out(i).valid      := cache_meta(i).valid
        io.out(i).dirty      := cache_meta(i).dirty
        io.out(i).tag        := cache_meta(i).tag
    }
}

class CacheMetaRamV(tag_width: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val clock  = Input(Clock())
        val reset  = Input(Bool())
        val flush  = Input(Bool())
        val valid  = Output(Bool())
        val dirty  = Output(Bool())
        val tag    = Output(UInt(tag_width.W))
        val en     = Input(Bool())
        val wr     = Input(Bool())
        val addr   = Input(UInt(6.W))
        val wvalid = Input(Bool())
        val wdirty = Input(Bool())
        val wtag   = Input(UInt(tag_width.W))
    })
}
