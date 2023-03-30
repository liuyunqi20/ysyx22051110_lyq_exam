package mycpu
import chisel3._
import chisel3.util._

class Wb_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val pc          = Input(UInt(w.W))
        val mem2wb      = Flipped(new MemtoWbBundle(w))
        val wb2rf       = new WbtoRfBundle(w)
        val exc_br      = new ExcBranchBundle(w)
    })
    val my_csr = Module(new Csr(w))
    // ------------------ intrrupt/exception ------------------ 
    io.exc_br.exc_br     := io.mem2wb.exc_type.orR === 1.U
    io.exc_br.exc_target := Mux1H(Seq(
        /* ecall */ io.mem2wb.exc_type(0) -> (my_csr.io.out.mtvec),
        /* mret  */ io.mem2wb.exc_type(1) -> (my_csr.io.out.mepc + 4.U(w.W)),
    ))
    val exc_code    = MuxLookup(io.mem2wb.exc_type, 0.U((w-1).W), Seq(
        /* ecall */ io.mem2wb.exc_type(0) -> (11.U((w-1).W)),
    ))
    // ------------------ CSR ------------------ 
    //csr inst
    my_csr.io.op.csr_op     := io.mem2wb.csr_op
    my_csr.io.op.csr_num    := io.mem2wb.csr_num
    my_csr.io.op.csr_wdata  := io.mem2wb.rs1
    //csr exc
    my_csr.io.exc.ecall     := io.mem2wb.exc_type(0) === 1.U
    my_csr.io.exc.mret      := io.mem2wb.exc_type(1) === 1.U
    my_csr.io.exc.epc       := io.pc
    my_csr.io.exc.exc_code  := Cat(0.U(1.W), exc_code)
    my_csr.io.exc.intr      := 0.B
    // ------------------ RF write back ------------------ 
    io.wb2rf.rf_we := io.mem2wb.gr_we
    io.wb2rf.waddr := io.mem2wb.dest
    io.wb2rf.wdata := Mux(io.mem2wb.csr_op.orR === 1.U, my_csr.io.op.csr_old, io.mem2wb.result)
}