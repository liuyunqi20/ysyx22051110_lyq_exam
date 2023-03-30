package mycpu
import chisel3._
import chisel3.util._

trait HasCsrConst{
    val Mstatus = 0x300
    val Mie     = 0x304
    val Mtvec   = 0x305
    val Mepc    = 0x341
    val Mcause  = 0x342
    val Mip     = 0x344
    val Mstatus_init = "ha00001800"
    val Mstatus_SXL_init = 0x2
    val Mstatus_UXL_init = 0x2
    val Mstatus_MPP_init = 0x3
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
    val mret       = Input(Bool())
    val epc        = Input(UInt(w.W))
    val exc_code   = Input(UInt((w-1).W))
    val intr_t     = Output(Bool())
}

class Csr(w: Int) extends Module with HasCsrConst{
    val io = IO(new Bundle{
        val op    = new CsrOpBundle(w)
        val out   = new CsrOutBundle(w)
        val exc   = new CsrExcBundle(w)
        val clint_intr_t = Input(Bool())
    })
    val mstatus_sxl  = RegInit(Mstatus_SXL_init.U(2.W))
    val mstatus_uxl  = RegInit(Mstatus_UXL_init.U(2.W))
    val mstatus_mpp  = RegInit(Mstatus_MPP_init.U(2.W))
    val mstatus_mie  = RegInit(0.U(1.W))
    val mstatus_mpie = RegInit(0.U(1.W))
    val mcause  = RegInit(0.U(w.W))
    val mepc    = RegInit(0.U(w.W))
    val mtvec   = RegInit(0.U(w.W))
    val mip     = RegInit(0.U(w.W))
    val mie     = RegInit(0.U(w.W))
    val mstatus_rval = Cat(0.U(28.W) , mstatus_sxl, mstatus_uxl, 0.U(19.W), 
                            mstatus_mpp, 0.U(3.W), mstatus_mpie, 0.U(3.W), mstatus_mie, 0.U(3.W))
    val mtvec_rval   = Cat(mtvec(w-1, 2), 0.U(2.W))
    val mepc_rval    = Cat(mepc(w-1, 2), 0.U(2.W))
    val mcause_rval  = mcause
    val has_intr_t   = io.clint_intr_t && (mstatus_mie === 1.U) && (mie(7) === 1.U)
    // ------------------- CSR inst ------------------- 
        val csr_1H  = MuxLookup(io.op.csr_num, 0.U(w.W), Seq(
            /* mstatus */ (Mstatus.U) -> ("h01".U),
            /* mtvec   */ (Mtvec.U)   -> ("h02".U),
            /* mepc    */ (Mepc.U)    -> ("h04".U),
            /* mcause  */ (Mcause.U)  -> ("h08".U),
            /* mie     */ (Mie.U)     -> ("h10".U),
            /* mip     */ (Mie.U)     -> ("h20".U),
        ))
        val csr_en  = io.op.csr_op.orR === 1.U
        val csr_src = Mux1H(Seq(
            csr_1H(0) -> mstatus_rval,
            csr_1H(1) -> mtvec_rval  ,
            csr_1H(2) -> mepc_rval   ,
            csr_1H(3) -> mcause_rval ,
            csr_1H(4) -> mie         ,
            csr_1H(5) -> mip         ,
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
        
        when(io.exc.ecall || has_intr_t){
            mstatus_mie  := 0.U(1.W)
            mstatus_mpie := mstatus_mie
            mstatus_mpp  := 3.U(2.W)
        } .elsewhen(io.exc.mret){
            mstatus_mie  := mstatus_mpie
            mstatus_mpie := 1.U(1.W)
        } .elsewhen(csr_en && csr_1H(0)){
            mstatus_sxl  := csr_res(35, 34)
            mstatus_uxl  := csr_res(33, 32)
            mstatus_mpp  := csr_res(12, 11)
            mstatus_mpie := csr_res(7)
            mstatus_mie  := csr_res(3)
        }
        // ----- mtvec ----- 
        when(csr_en && csr_1H(1)){
            mtvec   := csr_res
        }
        // ----- mepc ----- 
        when(io.exc.ecall || has_intr_t){
            mepc    := io.exc.epc
        } .elsewhen(csr_en && csr_1H(2)){
            mepc    := csr_res
        }
        // ----- mcause ----- 
        when(io.exc.ecall || has_intr_t){
            mcause  := Cat(has_intr_t.asUInt, io.exc.exc_code)
        } .elsewhen(csr_en && csr_1H(3)){
            mcause  := csr_res
        }
        // ----- mie ----- 
        when(csr_en && csr_1H(4)){
            mie     := csr_res
        }
        // ----- mip ----- 
        when(has_intr_t){
            mip(7)  := 1.U(1.W)
        }.elsewhen(csr_en && csr_1H(5)){
            mip     := csr_res
        } 
    // ------------------- CSR out port -------------------
    io.op.csr_old := MuxLookup(io.op.csr_num, 0.U(w.W), Seq(
            /* mstatus */ (Mstatus.U) -> mstatus_rval,
            /* mtvec   */ (Mtvec.U)   -> mtvec_rval  ,
            /* mepc    */ (Mepc.U)    -> mepc_rval   ,
            /* mcause  */ (Mcause.U)  -> mcause_rval ,
    ))
    io.out.mepc   := mepc_rval
    io.out.mtvec  := mtvec_rval
    io.exc.intr_t := has_intr_t
}