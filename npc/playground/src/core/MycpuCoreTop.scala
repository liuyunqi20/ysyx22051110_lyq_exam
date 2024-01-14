package mycpu
import chisel3._
import chisel3.util._

trait HasCoreTopConst{
    val nr_mmc_port       = 1
    val Cache_tag_width   = 23
    val DCache_nr_lines   = 32
    val ICache_nr_lines   = 32
    val ICache_nr_ways    = 4
    val DCache_nr_ways    = 4
    val ICache_block_size = 16
    val DCache_block_size = 16
}

/*
    Top module for CPU core. Components of CPU core:
    - 5 Pipline stage modules
    - Icache/Dcache
    - CLINT module
    - 2 AXIBridge (for IFU and MSU)

    The memory access bus in CPU core is SimpleBus(See CPUMemBundle in Interface.scala).
*/
class ysyx_22051110_MycpuCoreTop(w: Int, nr_mport: Int) extends Module with HasCoreTopConst{
    val io = IO(new Bundle{
        val core_debug = new DebugBundle(w)
        val ar = Decoupled(new AXI4LiteAR(w))
        val rd = Flipped(Decoupled(new AXI4LiteRD(w)))
        val aw = Decoupled(new AXI4LiteAW(w))
        val wt = Decoupled(new AXI4LiteWR(w))
        val b  = Flipped(Decoupled(new AXI4LiteWB(w)))
    });
    val my_if          = Module(new ysyx_22051110_If_stage(w, w))
    val my_id          = Module(new ysyx_22051110_Id_stage(w))
    val my_ex          = Module(new ysyx_22051110_Ex_stage(w))
    val my_mem         = Module(new ysyx_22051110_Mem_stage(w))
    val my_wb          = Module(new ysyx_22051110_Wb_stage(w))
    val my_csr         = Module(new ysyx_22051110_Csr(w))
    val my_axi_bridges = Seq.fill(nr_mport) { Module(new ysyx_22051110_AXIBridge(w, ICache_block_size * 8 / w)).io }
    val my_mmc         = Module(new ysyx_22051110_MemoryController(w, DCache_block_size * 8 / w))
    //ICache:
    val my_icache      = Module(new ysyx_22051110_CacheTop(w, Cache_tag_width, ICache_nr_lines,
                                            ICache_nr_ways, ICache_block_size, true))
    val my_dcache      = Module(new ysyx_22051110_CacheTop(w, Cache_tag_width, DCache_nr_lines,
                                            DCache_nr_ways, DCache_block_size, false))
    val my_clint       = Module(new ysyx_22051110_Clint(w))
    val my_arbiter    = Module(new ysyx_22051110_AXIArbiter(w, nr_mport))

    //IF stage
    my_if.io.branch        <> my_mem.io.branch
    my_if.io.exc_br        <> my_wb.io.exc_br
    //ID stage
    my_id.io.if2id         <> my_if.io.if2id
    my_id.io.wb2rf         <> my_wb.io.wb2rf
    my_id.io.exc_flush     := my_wb.io.exc_br.exc_br
    my_id.io.br_flush      := my_mem.io.branch.br_en
    my_id.io.es_forward    <> my_ex.io.es_forward
    my_id.io.ms_forward    <> my_mem.io.ms_forward
    my_id.io.ws_forward    <> my_wb.io.ws_forward
    //EX stage
    my_ex.io.id2ex         <> my_id.io.id2ex
    my_ex.io.exc_flush     := my_wb.io.exc_br.exc_br
    my_ex.io.br_flush      := my_mem.io.branch.br_en
    //MEM stage
    my_mem.io.ex2mem       <> my_ex.io.ex2mem
    my_mem.io.exc_flush    := my_wb.io.exc_br.exc_br
    //Wb stage
    my_wb.io.mem2wb        <> my_mem.io.mem2wb
    //CSR/CLINT
    my_csr.io.op           <> my_wb.io.csr_op
    my_csr.io.exc          <> my_wb.io.csr_exc
    my_csr.io.out          <> my_wb.io.csr_out
    my_csr.io.clint_intr_t := my_clint.io.has_intr_t
    //Memory Access
    //icache current ignored
    my_if.io.inst_mem      <> my_icache.io.in
    my_axi_bridges(0).in   <> my_icache.io.out
    //dcache
    my_mem.io.data_mem     <> my_dcache.io.in
    my_mmc.io.in           <> my_dcache.io.out
    my_clint.io.in         <> my_mmc.io.clint_out
    my_axi_bridges(1).in   <> my_mmc.io.axi_out
    //debug
    io.core_debug          <> my_wb.io.debug
    //cache flush
    my_icache.io.flush     := my_dcache.io.flush
    //AXI Arbiter
    for( i <- 0 until nr_mport){
        my_arbiter.io.in(i) <> my_axi_bridges(i).out
    }
    io.ar <> my_arbiter.io.out.ar
    io.rd <> my_arbiter.io.out.rd
    io.aw <> my_arbiter.io.out.aw
    io.wt <> my_arbiter.io.out.wt
    io.b  <> my_arbiter.io.out.b
}