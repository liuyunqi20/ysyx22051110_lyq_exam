package mycpu
import chisel3._

/*    
    IFU and MSU are linked to AXI Arbiter module. AXI module
transforms signal to pmem port and requests to Arbiter module. Arbiter module
choose one master to access memory. Pmem port also links to clint module in 
order to set timer registers.
             _______                  _________             _______________
            |       |                |         |           |  ___________  |
            |  IFU  |--------------->|         |           | |           | |   
            |_______|                |         |------------>| AXI-Read  |---------> pmem_read
                                     |         |           | |___________| |
                                     | Arbiter |           |  ___________  |
             _______                 |         |           | |           | |    
            |       |                |         |------------>| AXI-Write |-----|---> pmem_write
            |  MSU  |--------------->|         |           | |___________| |   |      _______
            |_______|                |_________|           |_______________|   |     |       |
                                                                               |---->| Clint |
                                                                                     |_______|

NOTE: Arbiter module arbits in read-read and write-write requests from IFU and
      MSU. pmem_read and pmem_write are designed to be used by IFU and MSU 
      seperately at the same time.
*/  


class MycpuCoreTop(w: Int) extends Module{
    val io = IO(new Bundle{
        val core_debug = new DebugBundle(w)
    });
    val my_if         = Module(new If_stage(w, w))
    val my_id         = Module(new Id_stage(w))
    val my_ex         = Module(new Ex_stage(w))
    val my_mem        = Module(new Mem_stage(w))
    val my_wb         = Module(new Wb_stage(w))
    val my_clint      = Module(new Clint(w))
    val my_csr        = Module(new Csr(w))
    val my_axi_bridge = Module(new AXI4LiteSram(w))
    val my_arbiter    = Module(new AXIArbiter(w, 2))
    val my_rmem_port  = Module(new Read_mem_port(w))
    val my_wmem_port  = Module(new Write_mem_port(w))
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
    my_clint.io.en         := my_dsram.io.sram_wt.en
    my_clint.io.wr         := my_dsram.io.sram_wt.wr
    my_clint.io.waddr      := my_dsram.io.sram_wt.addr
    my_clint.io.wdata      := my_dsram.io.sram_wt.wdata
    // IFU/MSU to arbiter   &   arbiter to AXI bridge
    my_arbiter.io.in(0)      <> my_if.io.inst_mem
    my_arbiter.io.in(1)      <> my_mem.io.data_mem
    my_axi_bridge.io.ar      <> my_arbiter.io.out.ar
    my_axi_bridge.io.rd      <> my_arbiter.io.out.rd
    my_axi_bridge.io.aw      <> my_arbiter.io.out.aw
    my_axi_bridge.io.wt      <> my_arbiter.io.out.wt
    my_axi_bridge.io.b       <> my_arbiter.io.out.b
    //AXI bridge to pmem port
    my_axi_bridge.io.sram_rd      <> my_rmem_port.io
    my_axi_bridge.io.sram_wt      <> my_wmem_port.io
    my_axi_bridge.io.sram_rd_resp := my_axi_bridge.io.sram_rd.en
    my_axi_bridge.io.sram_wt_resp := my_axi_bridge.io.sram_wt.en
    //debug
    io.core_debug.debug_pc       := my_if.io.pc
    io.core_debug.debug_nextpc   := my_if.io.nextpc
    io.core_debug.debug_rf_we    := my_wb.io.wb2rf.rf_we
    io.core_debug.debug_rf_wnum  := my_wb.io.wb2rf.waddr
    io.core_debug.debug_rf_wdata := my_wb.io.wb2rf.wdata
    io.core_debug.raise_intr     := my_csr.io.exc.intr_t
}