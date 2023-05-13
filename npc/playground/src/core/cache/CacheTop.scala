package mycpu
import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._

/*
Warnning: 
    This cache is designed to have a 3 stage pipeline, but current CPU is a single-issue pipline CPU.
    Only one request can be in cache pipeline as CPU pipeline will block before cache commit, so 
    data forwarding 
*/

trait HasCacheConst{
    val nr_state   = 3
    val s_idle     = 0x1
    val s_hitcheck = 0x2
    val s_refill   = 0x4
}

trait HasCacheStage3Const{
    val nr_state     = 6
    val s_idle       = 0x01
    val s_wb         = 0x02
    val s_refill_req = 0x04
    val s_refill     = 0x08
    val s_mmio       = 0x10
    val s_commit     = 0x20
}

class CacheConfig(val w: Int, val tag_width: Int, val nr_lines: Int, 
                  val nr_ways: Int, val block_size: Int){
    val block_word_n: Int = CacheTop.getBlockWordsNum(w, block_size)
    val index_width:  Int = CacheTop.getIndexWidth(nr_lines)
    val offset_width: Int = CacheTop.getOffsetWidth(block_size)
    val ways_width:   Int = CacheTop.getWaysWidth(nr_ways)
    val cache_addr_w: Int = tag_width + index_width + offset_width
}

class CacheTop(w: Int, tag_w: Int, nr_lines: Int, nr_ways: Int, block_size: Int) extends Module with HasCacheConst{
    val io = IO(new Bundle{
        val in  = Flipped(new CPUMemBundle(w, w))
        val out = new CPUMemBundle(w, block_size * 8)
    })

    val config = new CacheConfig(w, tag_w, nr_lines, nr_ways, block_size)
    val stage1 = Module(new CacheStage1(config))
    val stage2 = Module(new CacheStage2(config))
    val stage3 = Module(new CacheStage3(config))
    val cache_data_addr_w = 6 //log2Ceil(data_ram_word_depth)
    val meta_rd    = Wire(Vec(nr_ways, new CacheMetaBundle(config.tag_width) ))
    val cache_data = Seq.fill(nr_ways){ Module(new CacheDataRamV()).io }
    /* reserved for meta ram in scala */
        // val cache_meta = Seq.fill(nr_ways) {
        //     RegInit(VecInit(Seq.fill(nr_lines){ 0.U.asTypeOf(new CacheMetaBundle(config.tag_width)) } ))
        // }
        // when(stage1.io.rd.en){
        //     for( i <- 0 until nr_ways) { meta_rd(i) := cache_meta(i)(stage1.io.rd.index) }
        // }
        // for(i <- 0 until nr_ways; j <- 0 until nr_lines) {
        //     when(stage3.io.wt.en && (stage3.io.wt.way === i.U) && (stage3.io.wt.index === j.U)){
        //         cache_meta(i)(j).valid := stage3.io.wt.line.valid
        //         cache_meta(i)(j).dirty := stage3.io.wt.line.dirty
        //         cache_meta(i)(j).tag   := stage3.io.wt.line.tag
        //     }
        // }
    // ------------------------------------------- Meta RAM -------------------------------------------
    val cache_meta = Module(new CacheMetaRam(nr_ways, nr_lines, config.tag_width))
    cache_meta.io.en    := stage1.io.rd.en || stage3.io.wt.en
    cache_meta.io.wr    := stage3.io.wt.en
    cache_meta.io.way   := stage3.io.wt.way //stage1 ignored (read all ways in stage1)
    cache_meta.io.index := Mux(stage3.io.wt.en, stage3.io.wt.index, stage1.io.rd.index)
    when(stage1.io.rd.en){
        for( i <- 0 until nr_ways) { meta_rd(i) <> cache_meta.io.out(i) }
    }
    cache_meta.io.in.valid := stage3.io.wt.line.valid
    cache_meta.io.in.dirty := stage3.io.wt.line.dirty
    cache_meta.io.in.tag   := stage3.io.wt.line.tag
    // ------------------------------------------- Data RAM -------------------------------------------
    val data_wt_addr = Cat(0.U((cache_data_addr_w - config.index_width).W), stage3.io.wt.index)
    val data_rd_addr = Cat(0.U((cache_data_addr_w - config.index_width).W), stage1.io.rd.index)
    val data_way_sel = Wire(Vec(nr_ways, Bool()))
    for( i <- 0 until nr_ways){
        data_way_sel(i)     := (stage1.io.rd.index === i.U) || (stage3.io.wt.index === i.U) 
        cache_data(i).clock := clock
        cache_data(i).CEN   := ~(stage1.io.rd.en || stage3.io.wt.en)
        cache_data(i).WEN   := ~(stage3.io.wt.en && (stage3.io.wt.way === i.U))
        cache_data(i).BWEN  := Fill(128, 0.U)
        cache_data(i).A     := Mux(stage3.io.wt.en, data_wt_addr, data_rd_addr)
        cache_data(i).D     := stage3.io.wt.line.data.reverse.reduce((a, b) => Cat(a, b))
    }
    val s2_rd_lines = Wire(Vec(nr_ways, new CacheLineBundle(w, config.tag_width, config.block_word_n)))
    for( i <- 0 until nr_ways){
        s2_rd_lines(i).valid := meta_rd(i).valid
        s2_rd_lines(i).dirty := meta_rd(i).dirty
        s2_rd_lines(i).tag   := meta_rd(i).tag
        for( j <- 0 until config.block_word_n) { 
            s2_rd_lines(i).data(j) := cache_data(i).Q((j + 1) * w - 1, j * w)
        }
        stage2.io.rd_lines(i) := s2_rd_lines(i)
    }
    // ------------------------------------------- stage connection ------------------------------------------- 
    stage1.io.s1_to_s2 <> stage2.io.s1_to_s2
    stage2.io.s2_to_s3 <> stage3.io.s2_to_s3
    // ------------------------------------------- CPU  ------------------------------------------- 
    stage1.io.cpu <> io.in.req
    stage3.io.cpu <> io.in.ret
    io.in.rlast   := io.in.ret.valid
    io.out <> stage3.io.mem_out
}

object CacheTop{
    //default size is 2KB
    def apply(w: Int, tag_w: Int = 23, nr_lines: Int = 32, nr_ways: Int = 4, block_size: Int = 16): CacheTop = 
        new CacheTop(w, tag_w, nr_lines, nr_ways, block_size)
    def getTagWidth(w: Int, nr_lines: Int, block_size: Int): Int = 
        w - log2Ceil(nr_lines) - log2Ceil(block_size)
    def getBlockWordsNum = (w: Int, block_size: Int) => ((block_size * 8) / w)
    def getIndexWidth  = (n: Int) => log2Ceil(n)
    def getOffsetWidth = (n: Int) => log2Ceil(n)
    def getWaysWidth   = (n: Int) => log2Ceil(n)
}