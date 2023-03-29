package mycpu
import chisel3._
import chisel3.util._

trait HasCsrConst{
    val Mstatus = 0x300
    val Mtvec   = 0x305
    val Mepc    = 0x341
    val Mcause  = 0x342
}

class CsrOpBundle(w: Int) extends Bundle{
    val csr_op     = Input(UInt(3.W))
    val csr_num    = Input(UInt(12.W))
    val csr_wdata  = Input(UInt(w.W))
    val csr_old    = Output(UInt(w.W))
}

class CsrReadBundle(w: Int) extends Bundle{
    val csr_raddr  = Input(UInt(12.W))
    val csr_rdata  = Output(UInt(w.W))
}

class CsrExcBundle(w: Int) extends Bundle{
    val ecall      = Input(Bool())
    val ecall_epc  = Input(UInt(w.W))
    val ecall_code = Input(UInt(w.W))
}

class Csr(w: Int) extends Module with HasCsrConst{
    val io = IO(new Bundle{
        val op  = new CsrOpBundle(w)
        val rd  = new CsrReadBundle(w)
        val exc = new CsrExcBundle(w)
    })
    val mstatus = RegInit(0.U(w.W))
    val mcause  = RegInit(0.U(w.W))
    val mepc    = RegInit(0.U(w.W))
    val mtvec   = RegInit(0.U(w.W))
    // ------------------- CSR inst ------------------- 
        val csr_1H  = MuxLookup(io.op.csr_num, 0.U(w.W), Seq(
            /* mstatus */ (Mstatus.U) -> ("h01".U),
            /* mtvec   */ (Mtvec.U)   -> ("h02".U),
            /* mepc    */ (Mepc.U)    -> ("h04".U),
            /* mcause  */ (Mcause.U)  -> ("h08".U),
        ))
        val csr_en  = io.op.csr_op.orR === 1.U
        val csr_src = Mux1H(Seq(
            csr_1H(0) -> mstatus,
            csr_1H(1) -> mtvec,
            csr_1H(2) -> mepc,
            csr_1H(3) -> mcause,
        ))
        val csrrs_res = csr_src | io.op.csr_wdata
        val csrrc_res = csr_src & (~io.op.csr_wdata)   
        val csr_res   = Mux1H(Seq(
            io.op.csr_op(0) -> io.op.csr_wdata,
            io.op.csr_op(1) -> csrrs_res,
            io.op.csr_op(2) -> csrrc_res,
        ))
        io.op.csr_old := MuxLookup(io.op.csr_num, 0.U(w.W), Seq(
            /* mstatus */ (Mstatus.U) -> mstatus,
            /* mtvec   */ (Mtvec.U)   -> mtvec  ,
            /* mepc    */ (Mepc.U)    -> mepc   ,
            /* mcause  */ (Mcause.U)  -> mcause ,
        ))
    // ------------------- CSR read port -------------------
        io.rd.csr_rdata := MuxLookup(io.rd.csr_raddr, 0.U(w.W), Seq(
            /* mstatus */ (Mstatus.U) -> mstatus,
            /* mtvec   */ (Mtvec.U)   -> mtvec  ,
            /* mepc    */ (Mepc.U)    -> mepc   ,
            /* mcause  */ (Mcause.U)  -> mcause ,
        ))
    // ------------------- CSR regs -------------------
        // ----- mstatus
        when(csr_en && csr_1H(0)){
            mstatus := csr_res
        }
        // ----- mtvec
        when(csr_en && csr_1H(1)){
            mtvec   := csr_res
        }
        // ----- mepc
        when(io.exc.ecall){
            mepc    := io.exc.ecall_epc
        } .elsewhen(~io.exc.ecall && csr_en && csr_1H(2)){
            mepc    := csr_res
        }
        // ----- mcause
        when(io.exc.ecall){
            mcause  := io.exc.ecall_code
        } .elsewhen(~io.exc.ecall && csr_en && csr_1H(3)){
            mcause  := csr_res
        }
}