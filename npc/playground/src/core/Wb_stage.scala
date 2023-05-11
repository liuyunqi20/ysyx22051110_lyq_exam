package mycpu
import chisel3._
import chisel3.util._

class Wb_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val pc          = Input(UInt(w.W))
        val mem2wb      = Flipped(new MemtoWbBundle(w))
        val wb2rf       = new WbtoRfBundle(w)
        val exc_br      = new ExcBranchBundle(w)
        val csr_op      = Flipped(new CsrOpBundle(w))
        val csr_exc     = Flipped(new CsrExcBundle(w))
        val csr_out     = Flipped(new CsrOutBundle(w))
        //from IF_stage to indicate inst fetch is done
        val fs_next_ok   = Input(Bool())
    })
    // ------------------ intrrupt/exception ------------------ 
    val has_trap          = (io.mem2wb.exc_type.orR === 1.U) || (io.csr_exc.intr_t)
    io.exc_br.exc_br     := has_trap
    io.exc_br.exc_target := MuxCase(0.U(w.W), Seq(
        ( (io.mem2wb.exc_type(0) === 1.U) || io.csr_exc.intr_t ) -> (io.csr_out.mtvec),    /* trap entry */
        (  io.mem2wb.exc_type(1) === 1.U                       ) -> (io.csr_exc.mret_addr),  /*trap return */
    ))
    val exc_code    = MuxLookup(io.mem2wb.exc_type, 0.U(w.W), Seq(
        /* ecall  */ io.mem2wb.exc_type(0) -> (11.U(w.W)),
    ))
    // ------------------ CSR ------------------ 
    //csr inst
    io.csr_op.csr_op     := io.mem2wb.csr_op
    io.csr_op.csr_num    := io.mem2wb.csr_num
    io.csr_op.csr_wdata  := io.mem2wb.rs1
    //csr exc
    io.csr_exc.ecall     := io.mem2wb.exc_type(0) === 1.U
    io.csr_exc.mret      := io.mem2wb.exc_type(1) === 1.U
    io.csr_exc.epc       := io.pc
    io.csr_exc.exc_code  := exc_code
    // ------------------ RF write back ------------------ 
    val exc_buf     = RegInit(0.B)
    when(has_trap && ~exc_buf) { exc_buf := 1.B }
    .elsewhen(io.fs_next_ok) { exc_buf := 0.B }
    io.wb2rf.rf_we := io.mem2wb.gr_we && ~has_trap && io.fs_next_ok
    io.wb2rf.waddr := io.mem2wb.dest
    io.wb2rf.wdata := Mux(io.mem2wb.csr_op.orR === 1.U, io.csr_op.csr_old, io.mem2wb.result)
}