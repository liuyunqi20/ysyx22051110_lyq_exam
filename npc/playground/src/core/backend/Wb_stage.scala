package mycpu
import chisel3._
import chisel3.util._

class Wb_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val mem2wb      = Flipped(Decoupled(new MemtoWbBundle(w)))
        val wb2rf       = new WbtoRfBundle(w)
        val exc_br      = new ExcBranchBundle(w)
        val csr_op      = Flipped(new CsrOpBundle(w))
        val csr_exc     = Flipped(new CsrExcBundle(w))
        val csr_out     = Flipped(new CsrOutBundle(w))
        val ws_forward  = Valid(new ForwardingBundle(w))
        val ebreak      = Output(Bool())
        val debug       = Output(new DebugBundle(w))
    })
    val ws_valid     = RegInit(0.B)
    val ms_ws_r      = RegInit(0.U.asTypeOf(new MemtoWbBundle(w)))
    val has_trap     = (ms_ws_r.exc_type.orR === 1.U && ws_valid) || (io.csr_exc.intr_t)
    io.mem2wb.ready := 1.B
    ws_valid        := !has_trap && io.mem2wb.valid
    when(io.mem2wb.fire){
        ms_ws_r     := io.mem2wb.bits
    }
    // ------------------ intrrupt/exception ------------------ 
    
    io.exc_br.exc_br     := has_trap
    io.exc_br.exc_target := MuxCase(0.U(w.W), Seq(
        ( (ms_ws_r.exc_type(0) === 1.U) || io.csr_exc.intr_t ) -> (io.csr_out.mtvec),    /* trap entry */
        (  ms_ws_r.exc_type(1) === 1.U                       ) -> (io.csr_exc.mret_addr),  /*trap return */
    ))
    val exc_code    = MuxLookup(ms_ws_r.exc_type, 0.U(w.W), Seq(
        /* ecall  */ ms_ws_r.exc_type(0) -> (11.U(w.W)),
    ))
    // ------------------ CSR ------------------ 
    //csr inst
    io.csr_op.csr_op     := ms_ws_r.csr_op
    io.csr_op.csr_num    := ms_ws_r.csr_num
    io.csr_op.csr_wdata  := ms_ws_r.rs1
    //csr exc
    io.csr_exc.ecall     := ms_ws_r.exc_type(0) === 1.U
    io.csr_exc.mret      := ms_ws_r.exc_type(1) === 1.U
    io.csr_exc.epc       := ms_ws_r.pc
    io.csr_exc.exc_code  := exc_code
    // ------------------ RF write back ------------------ 
    io.wb2rf.rf_we := ms_ws_r.gr_we && ~has_trap && ws_valid
    io.wb2rf.waddr := ms_ws_r.dest
    io.wb2rf.wdata := Mux(ms_ws_r.csr_op.orR === 1.U, io.csr_op.csr_old, ms_ws_r.result)
    // ------------------ Forwarding ------------------
    io.ws_forward.valid     := ws_valid
    io.ws_forward.bits.en   := ws_valid && ms_ws_r.gr_we
    io.ws_forward.bits.dest := io.wb2rf.waddr
    io.ws_forward.bits.data := io.wb2rf.wdata
    // ------------------ Commit Ebeak ------------------
    io.ebreak := ms_ws_r.is_ebreak
    
    //debug
    io.debug.debug_valid    := ws_valid
    io.debug.debug_pc       := ms_ws_r.pc
    io.debug.debug_rf_we    := io.wb2rf.rf_we
    io.debug.debug_rf_wnum  := io.wb2rf.waddr
    io.debug.debug_rf_wdata := io.wb2rf.wdata
    io.debug.raise_intr     := io.csr_exc.intr_t
    io.debug.op_csr         := ms_ws_r.csr_op.orR === 1.U
    
}