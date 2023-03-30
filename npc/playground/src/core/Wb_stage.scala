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
    })
    // ------------------ intrrupt/exception ------------------ 
    io.exc_br.exc_br     := (io.mem2wb.exc_type.orR === 1.U) || (io.csr_exc.intr_t)
    io.exc_br.exc_target := Mux1H(Seq(
        /* ecall */ io.mem2wb.exc_type(0) -> (io.csr_out.mtvec),
        /* mret  */ io.mem2wb.exc_type(1) -> (io.csr_out.mepc + 4.U(w.W)),
    ))
    val exc_code    = MuxLookup(io.mem2wb.exc_type, 0.U((w-1).W), Seq(
        /* ecall */ io.mem2wb.exc_type(0) -> (11.U((w-1).W)),
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
    io.csr_exc.exc_code  := Cat(0.U(1.W), exc_code)
    // ------------------ RF write back ------------------ 
    io.wb2rf.rf_we := io.mem2wb.gr_we
    io.wb2rf.waddr := io.mem2wb.dest
    io.wb2rf.wdata := Mux(io.mem2wb.csr_op.orR === 1.U, io.csr_op.csr_old, io.mem2wb.result)
}