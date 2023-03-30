package mycpu
import chisel3._
import chisel3.util._

trait HasCsrConst{
    val Mstatus = 0x300
    val Mtvec   = 0x305
    val Mepc    = 0x341
    val Mcause  = 0x342
    val Mstatus_init = 0xa00001800
}

class CsrOpBundle(w: Int) extends Bundle{
    val csr_op     = Input(UInt(3.W))
    val csr_num    = Input(UInt(12.W))
    val csr_wdata  = Input(UInt(w.W))
    val csr_old    = Output(UInt(w.W))
}

class CsrOutBundle(w: Int) extends Bundle{
    val mepc       = Output(UInt(w.W))
    val mtvec      = Output(UInt(w.W))
}

class CsrExcBundle(w: Int) extends Bundle{
    val ecall      = Input(Bool())
    val ecall_epc  = Input(UInt(w-1.W))
    val exc_code   = Input(UInt(w-1.W))
    val intr    = Input(Bool())
}

class Csr(w: Int) extends Module with HasCsrConst{
    val io = IO(new Bundle{
        val op  = new CsrOpBundle(w)
        val out = new CsrOutBundle(w)
        val exc = new CsrExcBundle(w)
    })
    val mstatus = RegInit(Mstatus_init.U(w.W))
    val mcause  = RegInit(0.U(w.W))
    val mepc    = RegInit(0.U(w.W))
    val mtvec   = RegInit(0.U(w.W))
    val mip     = RegInit(0.U(w.W))
    val mie     = RegInit(0.U(w.W))
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
    // ------------------- CSR regs -------------------
        // ----- mstatus ----- 
        val mstatus_rval = Cat(0.U(28.W) , mstatus(35, 32) /* SXL UXL */, 0.U(19.W), 
                            mstatus(12, 11) /* MPP */, 0.U(7.W), mstatus(3) /* MIE */, 0.U(3.W))
        when(csr_en && csr_1H(0)){
            mstatus := csr_res
        }
        // ----- mtvec ----- 
        val mtvec_rval   = Cat(mtvec(w-1, 2), 0.U(2.W))
        when(csr_en && csr_1H(1)){
            mtvec   := csr_res
        }
        // ----- mepc ----- 
        val mepc_rval    = Cat(mepc(w-1, 2), 0.U(2.W))
        when(io.exc.ecall || io.exc.intr){
            mepc    := io.exc.ecall_epc
        } .elsewhen(~io.exc.ecall && csr_en && csr_1H(2)){
            mepc    := csr_res
        }
        // ----- mcause ----- 
        val mcause_rval  = mcause
        when(io.exc.ecall || io.exc.intr){
            mcause  := Cat(io.exc.intr.asUInt, io.exc.exc_code)
        } .elsewhen(~io.exc.ecall && csr_en && csr_1H(3)){
            mcause  := csr_res
        }
    // ------------------- CSR out port -------------------
    io.op.csr_old := MuxLookup(io.op.csr_num, 0.U(w.W), Seq(
            /* mstatus */ (Mstatus.U) -> mstatus_rval,
            /* mtvec   */ (Mtvec.U)   -> mtvec_rval  ,
            /* mepc    */ (Mepc.U)    -> mepc_rval   ,
            /* mcause  */ (Mcause.U)  -> mcause_rval ,
    ))
    io.out.mepc  := mepc_rval
    io.out.mtvec := mtvec_rval
}