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
class MycpuCoreTop(w: Int, nr_mport: Int) extends Module with HasCoreTopConst{
    val io = IO(new Bundle{
        val core_debug = new DebugBundle(w)
        val axi_sram   = Vec(nr_mport, new AXI4LiteBundle(w))
    });
    val my_if          = Module(new If_stage(w, w))
    val my_id          = Module(new Id_stage(w))
    val my_ex          = Module(new Ex_stage(w))
    val my_mem         = Module(new Mem_stage(w))
    val my_wb          = Module(new Wb_stage(w))
    val my_csr         = Module(new Csr(w))
    val my_axi_bridge0 = Module(new AXIBridge(w, ICache_block_size * 8 / w))
    val my_axi_bridge1 = Module(new AXIBridge(w, DCache_block_size * 8 / w))
    val my_mmc         = Module(new MemoryController(w, DCache_block_size * 8 / w))
    //ICache: 
    val my_icache      = Module(new CacheTop(w, Cache_tag_width, ICache_nr_lines, 
                                            ICache_nr_ways, ICache_block_size))
    val my_dcache      = Module(new CacheTop(w, Cache_tag_width, DCache_nr_lines,
                                            DCache_nr_ways, DCache_block_size))
    val my_clint       = Module(new Clint(w))
                                        
    //IF stage
    my_if.io.branch        <> my_mem.io.branch
    my_if.io.exc_br        <> my_wb.io.exc_br
    //ID stage
    my_id.io.if2id         <> my_if.io.if2id
    my_id.io.wb2rf         <> my_wb.io.wb2rf
    my_id.io.exc_flush     := my_wb.io.exc_br.exc_br
    my_id.io.br_flush      := my_mem.io.branch.br_en
    my_id.io.ws_forward    <> my_wb.io.ws_forward
    //EX stage
    my_ex.io.id2ex         <> my_id.io.id2ex
    my_ex.io.exc_flush     := my_wb.io.exc_br.exc_br
    my_ex.io.br_flush      := my_mem.io.branch.br_en
    my_ex.io.ms_forward    <> my_mem.io.ms_forward
    my_ex.io.ws_forward    <> my_wb.io.ws_forward
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
    my_axi_bridge0.io.in   <> my_icache.io.out
    io.axi_sram(0)         <> my_axi_bridge0.io.out
    //dcache
    my_mem.io.data_mem     <> my_dcache.io.in
    my_mmc.io.in           <> my_dcache.io.out
    my_clint.io.in         <> my_mmc.io.clint_out
    my_axi_bridge1.io.in   <> my_mmc.io.axi_out
    io.axi_sram(1)         <> my_axi_bridge1.io.out
    //debug
    io.core_debug.debug_pc       := my_wb.io.mem2wb.bits.pc
    io.core_debug.debug_rf_we    := my_wb.io.wb2rf.rf_we
    io.core_debug.debug_rf_wnum  := my_wb.io.wb2rf.waddr
    io.core_debug.debug_rf_wdata := my_wb.io.wb2rf.wdata
    io.core_debug.raise_intr     := my_csr.io.exc.intr_t
}