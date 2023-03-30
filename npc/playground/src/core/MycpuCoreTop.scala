package mycpu
import chisel3._

class MycpuCoreTop(w: Int) extends Module{
    val io = IO(new Bundle{
        val core_inst_mem_in  = new MemInBundle(w)
        val core_inst_mem_out = new MemOutBundle(w)
        val core_data_mem_in  = new MemInBundle(w)
        val core_data_mem_out = new MemOutBundle(w)
        val core_debug        = new DebugBundle(w)
    });
    val my_if    = Module(new If_stage(w, w))
    val my_id    = Module(new Id_stage(w))
    val my_ex    = Module(new Ex_stage(w))
    val my_mem   = Module(new Mem_stage(w))
    val my_wb    = Module(new Wb_stage(w))
    val my_clint = Module(new Clint(w))
    val my_csr   = Module(new Csr(w))
    //IF stage
    my_if.io.inst_mem_in   <> io.core_inst_mem_in
    my_if.io.inst_mem_out  <> io.core_inst_mem_out
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
    my_mem.io.data_mem_in  <> io.core_data_mem_in
    my_mem.io.data_mem_out <> io.core_data_mem_out
    //Wb stage
    my_wb.io.mem2wb        <> my_mem.io.mem2wb
    my_wb.io.pc            := my_if.io.pc
    //CSR/CLINT
    my_csr.io.op           <> my_wb.io.csr_op
    my_csr.io.exc          <> my_wb.io.csr_exc
    my_csr.io.out          <> my_wb.io.csr_out
    my_csr.io.clint_int_t  := my_clint.io.has_intr_t
    my_clint.io.en         := my_mem.io.data_mem_out.en
    my_clint.io.wr         := my_mem.io.data_mem_out.wr
    my_clint.io.waddr      := my_mem.io.data_mem_out.addr
    my_clint.io.wdata      := my_mem.io.data_mem_out.wdata
    //debug
    io.core_debug.debug_pc       := my_if.io.pc
    io.core_debug.debug_nextpc   := my_if.io.nextpc
    io.core_debug.debug_rf_we    := my_wb.io.wb2rf.rf_we
    io.core_debug.debug_rf_wnum  := my_wb.io.wb2rf.waddr
    io.core_debug.debug_rf_wdata := my_wb.io.wb2rf.wdata

}