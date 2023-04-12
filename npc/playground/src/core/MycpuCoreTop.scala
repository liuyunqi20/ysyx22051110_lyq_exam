package mycpu
import chisel3._

/*    
    IFU and MSU are linked to AXI module use AXI4-Lite Interface. AXI module
transforms signal to pmem port and requests to Arbiter module. Arbiter module
choose one master to access memory. Pmem port also links to clint module in 
order to set timer registers.
             _______      _______________              _________
            |       |    |               |            |         |
            |  IFU  |--->|      AXI      |----------->|         |
            |_______|    |_______________|            |         |    
                                                      |         |----------> pmem_read
               ...                                    | Arbiter |      
             _______      _______________             |         |----------> pmem_write
            |       |    |               |            |         |     
            |  MSU  |--->|      AXI      |----|------>|         |      
            |_______|    |_______________|    |       |_________|          
                                              |
                                              |        _______
                                              |------>|       |
                                                      | clint |
                                                      |_______|

NOTE: Arbiter module arbits in read-read and write-write requests from IFU and
      MSU. pmem_read and pmem_write are designed to be used by IFU and MSU 
      seperately at the same time.
*/  


class MycpuCoreTop(w: Int) extends Module{
    val io = IO(new Bundle{
        val core_debug = new DebugBundle(w)
    });
    val my_if        = Module(new If_stage(w, w))
    val my_id        = Module(new Id_stage(w))
    val my_ex        = Module(new Ex_stage(w))
    val my_mem       = Module(new Mem_stage(w))
    val my_wb        = Module(new Wb_stage(w))
    val my_clint     = Module(new Clint(w))
    val my_csr       = Module(new Csr(w))
    val my_isram     = Module(new AXI4LiteSram(w))
    val my_dsram     = Module(new AXI4LiteSram(w))
    val my_arbit     = Module(new AXIArbiter(w))
    val my_rmem_port = Module(new Read_mem_port(w))
    val my_wmem_port = Module(new Write_mem_port(w))
    //IF stage
    my_if.io.branch        <> my_ex.io.branch
    my_if.io.exc_br        <> my_wb.io.exc_br
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
    my_mem.io.fs_mem_ok    := my_if.io.fs_mem_ok
    //Wb stage
    my_wb.io.mem2wb        <> my_mem.io.mem2wb
    my_wb.io.pc            := my_if.io.pc
    my_wb.io.fs_mem_ok     := my_if.io.fs_mem_ok
    //CSR/CLINT
    my_csr.io.op           <> my_wb.io.csr_op
    my_csr.io.exc          <> my_wb.io.csr_exc
    my_csr.io.out          <> my_wb.io.csr_out
    my_csr.io.clint_intr_t := my_clint.io.has_intr_t
    my_clint.io.en         := my_dsram.io.sram_wt.en
    my_clint.io.wr         := my_dsram.io.sram_wt.wr
    my_clint.io.waddr      := my_dsram.io.sram_wt.addr
    my_clint.io.wdata      := my_dsram.io.sram_wt.wdata
    // IFU to AXI inst sram
    my_isram.io.ar         <> my_if.io.inst_mem.ar
    my_isram.io.rd         <> my_if.io.inst_mem.rd
    my_isram.io.aw         <> my_if.io.inst_mem.aw
    my_isram.io.wt         <> my_if.io.inst_mem.wt
    my_isram.io.b          <> my_if.io.inst_mem.b
    my_isram.io.rd_sel     := my_arbit.io.sel_rd_IFU
    my_isram.io.wt_sel     := my_arbit.io.sel_wt_IFU
    // MSU to AXI data sram
    my_dsram.io.ar         <> my_mem.io.data_mem.ar
    my_dsram.io.rd         <> my_mem.io.data_mem.rd
    my_dsram.io.aw         <> my_mem.io.data_mem.aw
    my_dsram.io.wt         <> my_mem.io.data_mem.wt
    my_dsram.io.b          <> my_mem.io.data_mem.b
    my_dsram.io.rd_sel     := my_arbit.io.sel_rd_MSU
    my_dsram.io.wt_sel     := my_arbit.io.sel_wt_MSU
    // memory Arbiter
    my_arbit.io.rd_IFU     <> my_isram.io.sram_rd
    my_arbit.io.wt_IFU     <> my_isram.io.sram_wt
    my_arbit.io.rd_MSU     <> my_dsram.io.sram_rd
    my_arbit.io.wt_MSU     <> my_dsram.io.sram_wt
    // pmem access port 
    my_arbit.io.mem_rd.en    <> my_rmem_port.io.en
    my_arbit.io.mem_rd.wr    <> my_rmem_port.io.wr
    my_arbit.io.mem_rd.addr  <> my_rmem_port.io.addr
    my_arbit.io.mem_rd.rdata <> my_rmem_port.io.rdata
    my_arbit.io.mem_wt.en    <> my_wmem_port.io.en
    my_arbit.io.mem_wt.wr    <> my_wmem_port.io.wr
    my_arbit.io.mem_wt.addr  <> my_wmem_port.io.addr
    my_arbit.io.mem_wt.wdata <> my_wmem_port.io.wdata
    my_arbit.io.mem_wt.wmask <> my_wmem_port.io.wmask
    //debug
    io.core_debug.debug_pc       := my_if.io.pc
    io.core_debug.debug_nextpc   := my_if.io.nextpc
    io.core_debug.debug_rf_we    := my_wb.io.wb2rf.rf_we
    io.core_debug.debug_rf_wnum  := my_wb.io.wb2rf.waddr
    io.core_debug.debug_rf_wdata := my_wb.io.wb2rf.wdata
    io.core_debug.raise_intr     := my_csr.io.exc.intr_t
}