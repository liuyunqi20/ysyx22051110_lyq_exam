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
    val Mstatus_init     = "ha00001800"
    val Mstatus_SXL_init = 0x2
    val Mstatus_UXL_init = 0x2
    val Mstatus_MPP_init = 0x3
    val Mcause_TINT      = "h8000_0000_0000_0007"
    val Mcause_EINT      = "h8000_0000_0000_000b"
    val MEIE_BIT     = 11
    val MTIE_BIT     = 7
    val MEIP_BIT     = 11
    val MTIP_BIT     = 7
}

class CsrOpBundle(w: Int) extends Bundle{
    val csr_en     = Input(Bool())
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
    val exc_code   = Input(UInt(w.W))
    val intr_t     = Output(Bool())
    val mret_addr  = Output(UInt(w.W))
}

/*
    Csr module is for managing CSR registers. io.op is used for CSR-type operation.
io.out transmit CSR register data into pipeline units. io.exc is used for exception
signal transmission from or to pipeline. Interrupt pins(CLINT) are linked to Csr
module.
    When trap triggered from pipeline, exc.ecall is set to 1 and exc.exc_code shows
exception type. exc.epc will send current pc value to EPC reg in Csr module.
    When executing mret instrution exc.mret will indicates this operation from pipline
and exc.mret_addr will be sent to pipeline from EPC reg in Csr module.
    When interrupt occurs exc.intr_t will be sent to pipeline to indicates interrupt
from Csr module/
*/
class ysyx_22051110_Csr(w: Int) extends Module with HasCsrConst{
    val io = IO(new Bundle{
        val op    = new CsrOpBundle(w)
        val out   = new CsrOutBundle(w)
        val exc   = new CsrExcBundle(w)
        val timer_intr     = Input(Bool())
        val external_intr  = Input(Bool())
        val timer_intr_clr = Input(Bool())
    })
    val mstatus_sxl  = RegInit(Mstatus_SXL_init.U(2.W))
    val mstatus_uxl  = RegInit(Mstatus_UXL_init.U(2.W))
    val mstatus_mpp  = RegInit(Mstatus_MPP_init.U(2.W))
    val mstatus_mie  = RegInit(0.B)
    val mstatus_mpie = RegInit(0.B)
    val mcause  = RegInit(0.U(w.W))
    val mepc    = RegInit(0.U(w.W))
    val mtvec   = RegInit(0.U(w.W))
    val mie_meie = RegInit(0.B)
    val mie_mtie = RegInit(0.B)
    val mip_meip = RegInit(0.B)
    val mip_mtip = RegInit(0.B)
    val mstatus_rval = Cat(0.U(28.W) , mstatus_sxl, mstatus_uxl, 0.U(19.W),
                            mstatus_mpp, 0.U(3.W), mstatus_mpie, 0.U(3.W), mstatus_mie, 0.U(3.W))
    val mtvec_rval   = Cat(mtvec(w-1, 2), 0.U(2.W))
    val mepc_rval    = Cat(mepc(w-1, 2), 0.U(2.W))
    val mcause_rval  = mcause
    val mie_rval     = Cat(0.U(52.W), mie_meie, 0.U(3.W), mie_mtie, 0.U(7.W))
    val mip_rval     = Cat(0.U(52.W), mip_meip, 0.U(3.W), mip_mtip, 0.U(7.W))
    val has_t_intr_m = io.timer_intr    && mstatus_mie && mie_mtie && !io.timer_intr_clr
    val has_e_intr_m = io.external_intr && mstatus_mie && mie_meie
    val has_intr     = has_t_intr_m || has_e_intr_m
    // ------------------- CSR inst -------------------
        val csr_1H  = MuxLookup(io.op.csr_num, 0.U(6.W), Seq(
            /* mstatus */ (Mstatus.U) -> ("h01".U),
            /* mtvec   */ (Mtvec.U)   -> ("h02".U),
            /* mepc    */ (Mepc.U)    -> ("h04".U),
            /* mcause  */ (Mcause.U)  -> ("h08".U),
            /* mie     */ (Mie.U)     -> ("h10".U),
            /* mip     */ (Mip.U)     -> ("h20".U),
        ))
        val csr_en  = io.op.csr_op.orR === 1.U && io.op.csr_en
        val csr_src = Mux1H(Seq(
            csr_1H(0) -> mstatus_rval,
            csr_1H(1) -> mtvec_rval  ,
            csr_1H(2) -> mepc_rval   ,
            csr_1H(3) -> mcause_rval ,
            csr_1H(4) -> mie_rval    ,
            csr_1H(5) -> mip_rval    ,
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

        when(io.exc.ecall || has_intr){
            mstatus_mie  := 0.B
            mstatus_mpie := mstatus_mie
            mstatus_mpp  := 3.U(2.W)
        } .elsewhen(io.exc.mret){
            mstatus_mie  := mstatus_mpie
            mstatus_mpie := 1.B
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
        when(io.exc.ecall || has_intr){
            mepc    := io.exc.epc
        } .elsewhen(csr_en && csr_1H(2)){
            mepc    := csr_res
        }
        // ----- mcause -----
        when(io.exc.ecall){
            mcause  := io.exc.exc_code
        } .elsewhen(has_t_intr_m){
            mcause  := Mcause_TINT.U(w.W)
        } .elsewhen(has_e_intr_m){
            mcause  := Mcause_EINT.U(w.W)
        } .elsewhen(csr_en && csr_1H(3)){
            mcause  := csr_res
        }
        // ----- mie -----
        when(csr_en && csr_1H(4)){
            mie_meie := csr_res(MEIE_BIT)
            mie_mtie := csr_res(MTIE_BIT)
        }
        // ----- mip -----
        when(has_t_intr_m){
            mip_mtip := 1.B
        }.elsewhen(io.timer_intr_clr){
            mip_mtip := 0.B
        }.elsewhen(csr_en && csr_1H(5)){
            mip_mtip := csr_res(MTIP_BIT)
        }
        when(has_e_intr_m){
            mip_meip := 1.B
        }.elsewhen(csr_en && csr_1H(5)){
            mip_meip := csr_res(MEIP_BIT)
        }
    // ------------------- CSR out port -------------------
    io.op.csr_old    := csr_src
    io.out.mepc      := mepc_rval
    io.out.mtvec     := mtvec_rval
    io.exc.intr_t    := has_intr
        //when intr return to epc, else return to epc
        // io.exc.mret_addr := Mux(mcause(w-1) === 1.U, mepc_rval, mepc_rval + 4.U(w.W))
    io.exc.mret_addr := mepc_rval
}