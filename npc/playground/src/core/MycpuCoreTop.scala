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
    // val my_icache      = Module(new CacheTop(w, Cache_tag_width, ICache_nr_lines, 
    //                                         ICache_nr_ways, ICache_block_size))
    val my_dcache      = Module(new CacheTop(w, Cache_tag_width, DCache_nr_lines,
                                            DCache_nr_ways, DCache_block_size))
    val my_clint       = Module(new Clint(w))
                                        
    //IF stage
    my_if.io.branch        <> my_ex.io.branch
    my_if.io.exc_br        <> my_wb.io.exc_br
    my_if.io.if2mem        <> my_mem.io.if2mem
    //ID stage
    my_id.io.pc            := my_if.io.pc
    my_id.io.if2id         <> my_if.io.if2id
    my_id.io.wb2rf         <> my_wb.io.wb2rf
    //EX stage
    my_ex.io.pc            := my_if.io.pc
    my_ex.io.id2ex         <> my_id.io.id2ex
    //MEM stage
    my_mem.io.ex2mem       <> my_ex.io.ex2mem
    my_mem.io.has_intr     := my_csr.io.exc.intr_t    
    //Wb stage
    my_wb.io.mem2wb        <> my_mem.io.mem2wb
    my_wb.io.pc            := my_if.io.pc
    my_wb.io.fs_next_ok    := my_if.io.fs_next_ok
    //CSR/CLINT
    my_csr.io.op           <> my_wb.io.csr_op
    my_csr.io.exc          <> my_wb.io.csr_exc
    my_csr.io.out          <> my_wb.io.csr_out
    my_csr.io.clint_intr_t := my_clint.io.has_intr_t
    //Memory Access
    //icache current ignored
    // my_icache.io.in        <> my_if.io.inst_mem
    // my_axi_bridge0.io.in   <> my_icache.io.out
    my_axi_bridge0.io.in   <> my_if.io.inst_mem
    io.axi_sram(0)         <> my_axi_bridge0.io.out
    //dcache
    my_mem.io.data_mem     <> my_dcache.io.in
    my_mmc.io.in           <> my_dcache.io.out
    my_clint.io.in         <> my_mmc.io.clint_out
    my_axi_bridge1.io.in   <> my_mmc.io.axi_out
    io.axi_sram(1)         <> my_axi_bridge1.io.out
    //debug
    io.core_debug.debug_pc       := my_if.io.pc
    io.core_debug.debug_nextpc   := my_if.io.nextpc
    io.core_debug.debug_rf_we    := my_wb.io.wb2rf.rf_we
    io.core_debug.debug_rf_wnum  := my_wb.io.wb2rf.waddr
    io.core_debug.debug_rf_wdata := my_wb.io.wb2rf.wdata
    io.core_debug.raise_intr     := my_csr.io.exc.intr_t
}