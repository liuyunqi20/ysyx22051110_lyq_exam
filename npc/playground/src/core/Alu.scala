package mycpu
import chisel3._
import chisel3.util._

class Alu(w: Int) extends Module{
    val ALUOP_LEN = 23
    /*
    add sub and or xor sll srl sra srlw sraw mul mulh mulhu mulhsu
     |   |   |   |  |   |   |   |    |    |   |    |    |      |
     0   1   2   3  4   5   6   7    8    9   10   11   12     13
    mulw div divu divw divuw rem remu remw remuw
     |    |    |    |    |    |    |    |    |
     14   15   16   17   18   19   20   21   22
    */
    val io = IO(new Bundle{
        val src1     = Input(UInt(w.W))
        val src2     = Input(UInt(w.W))
        val alu_op   = Input(UInt(ALUOP_LEN.W))
        val res      = Output(UInt(w.W))
        val cout     = Output(UInt(1.W))
        val overflow = Output(UInt(1.W))
    })
    //arith
    val cin      = Mux(io.alu_op(1) === 1.U, 1.U(w.W), 0.U(w.W))
    val add_src1 = io.src1
    val add_src2 = Mux(io.alu_op(1) === 1.U, ~io.src2,io.src2)
    val add_res  = (add_src1 +& add_src2) + cin
    //logic
    val and_res  = io.src1 & io.src2
    val or_res   = io.src1 | io.src2
    val xor_res  = io.src1 ^ io.src2
    //shift
    val shift_len   = io.src2(5, 0)
    val shift_len_w = io.src2(4, 0)
    val sll         = io.src1 << shift_len
    val srl         = io.src1 >> shift_len
    val sra         = (io.src1.asSInt) >> shift_len
    val srlw        = (io.src1(31, 0)) >> shift_len_w
    val sraw        = ((io.src1(31, 0)).asSInt) >> shift_len_w
    //io
    io.cout     := add_res(w)
    io.overflow := Mux(io.alu_op(0) === 1.U, 
        ( ~(io.src1(w-1) ^ io.src2(w-1)) & (io.src1(w-1) ^ add_res(w-1)) ),
        (  (io.src1(w-1) ^ io.src2(w-1)) & (io.src1(w-1) ^ add_res(w-1)) )
    )
    //mul
    val mul_src2_msb = Mux(io.alu_op(13) === 1.U, 0.U(1.W), io.src2(w - 1))
    val mul_res_s    = Cat(io.src1(w - 1), io.src1(w - 1, 0)).asSInt * Cat(mul_src2_msb, io.src2(w - 1, 0)).asSInt
    val mul_res_u    = Cat(0.U(1.W)   , io.src1(w - 1, 0)).asUInt * Cat(0.U(1.W)    , io.src2(w - 1, 0)).asUInt
    val mul_res_w    = io.src1(31, 0) * io.src2(31, 0)
    //div
    val div_res   = io.src1.asSInt / io.src2.asSInt
    val divu_res  = io.src1 / io.src2
    val divw_res  = io.src1(31, 0).asSInt / io.src2(31, 0).asSInt
    val divuw_res = io.src1(31, 0) / io.src2(31, 0)
    //rem 
    val rem_res   = io.src1.asSInt % io.src2.asSInt
    val remu_res  = io.src1 % io.src2
    val remw_res  = io.src1(31, 0).asSInt % io.src2(31, 0).asSInt
    val remuw_res = io.src1(31, 0) % io.src2(31, 0)
    io.res      := Mux1H(Seq(
        /* add    */ io.alu_op(0)  -> add_res(w-1, 0),
        /* sub    */ io.alu_op(1)  -> add_res(w-1, 0),
        /* and    */ io.alu_op(2)  -> and_res,
        /* or     */ io.alu_op(3)  -> or_res,
        /* xor    */ io.alu_op(4)  -> xor_res,
        /* sll    */ io.alu_op(5)  -> sll(w - 1, 0),
        /* srl    */ io.alu_op(6)  -> srl,
        /* sra    */ io.alu_op(7)  -> sra.asUInt,
        /* srlw   */ io.alu_op(8)  -> srlw,
        /* sraw   */ io.alu_op(9)  -> sraw.asUInt,
        /* mul    */ io.alu_op(10) -> mul_res_s(w - 1    , 0).asUInt,
        /* mulh   */ io.alu_op(11) -> mul_res_s(2 * w - 1, w).asUInt,
        /* mulhu  */ io.alu_op(12) -> mul_res_u(2 * w - 1, w)       ,
        /* mulhsu */ io.alu_op(13) -> mul_res_s(w - 1    , 0).asUInt,
        /* mulw   */ io.alu_op(14) -> mul_res_w.asUInt,
        /* div    */ io.alu_op(15) -> div_res.asUInt,
        /* divu   */ io.alu_op(16) -> divu_res,
        /* divw   */ io.alu_op(17) -> Cat(Fill(w - 32, divw_res(31)) , divw_res(31, 0)).asUInt,
        /* divuw  */ io.alu_op(18) -> Cat(Fill(w - 32, divuw_res(31)), divuw_res(31, 0)),
        /* rem    */ io.alu_op(19) -> rem_res.asUInt,
        /* remu   */ io.alu_op(20) -> remu_res,
        /* remw   */ io.alu_op(21) -> Cat(Fill(w - 32, remw_res(31)) , remw_res(31, 0)).asUInt,
        /* remuw  */ io.alu_op(22) -> Cat(Fill(w - 32, remuw_res(31)), remuw_res(31, 0)),
    ))
}