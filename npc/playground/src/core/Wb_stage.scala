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
    // ------------------ intrrupt ------------------ 
    io.exc_br.exc_en     := io.mem2wb.exc_type.orR === 1.U
    io.exc_br.exc_target := Mux1H(Seq(
        /* ecall */ exc_type(0) -> (my_csr.io.rdata)
        /* mret  */ exc_type(1) -> (my_csr.io.rdata + 4.U(w.W))
    ))
    val intr_raddr  = Mux1H(Seq(
        /* ecall */ exc_type(0) -> ("h305".U(12.W)) //mtvec
        /* mret  */ exc_type(1) -> ("h341".U(12.W)) //mepc
    ))
    val exc_code    = MuxLookup(io.exc_type, 0.U((w-1).W)
        /* ecall */ exc_type(0) -> (11.U((w-1).W))
    )
    // ------------------ CSR ------------------ 
    //csr inst
    my_csr.io.op.csr_op    := io.mem2wb.csr_op
    my_csr.io.op.csr_num   := io.mem2wb.csr_num
    my_csr.io.op.csr_wdata := io.mem2wb.rs1
    //csr read
    my_csr.io.raddr        := intr_raddr
    //csr exc
    my_csr.io.ecall        := io.mem2wb.exc_type(0) === 1.U
    my_csr.io.ecall_epc    := io.pc
    my_csr.io.ecall_code   := Cat(0.U(1.W), exc_code)
    // ------------------ RF write back ------------------ 
    io.wb2rf.rf_we := io.mem2wb.gr_we
    io.wb2rf.waddr := io.mem2wb.dest
    io.wb2rf.wdata := Mux(io.mem2wb.csr_op.orR === 1.U, my_csr.io.op.csr_old, io.mem2wb.result)
}