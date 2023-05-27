package mycpu
import chisel3._
import chisel3.util._

/*
    ALU (Arithmetic and Logic Unit) module is for basic arithmetical and logical operation
of integer sources. All operation is binary, thus src1 and src2 are the sources. alu_op is
indicates type of operation using one hot code, the mapping table of alu_op is shown below.
cout and overflow is only used for add and sub operations.
*/
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
    val io = IO(Decoupled(new Bundle{
        val src1      = Input(UInt(w.W))
        val src2      = Input(UInt(w.W))
        val alu_op    = Input(UInt(ALUOP_LEN.W))
        val res       = Output(UInt(w.W))
        val cout      = Output(UInt(1.W))
        val overflow  = Output(UInt(1.W))

        val valid     = Input(Bool())
        val ready     = Output(Bool())
        val alu_flush = Input(Bool())
        val out_valid = Output(Bool())
        val test_eq   = Output(Bool())
    }))
    val is_mul = (io.bits.alu_op(14, 10).orR) === 1.U
    val is_div = (io.bits.alu_op(22, 15).orR) === 1.U
    //arith
    val cin      = Mux(io.bits.alu_op(1) === 1.U, 1.U(w.W), 0.U(w.W))
    val add_src1 = io.bits.src1
    val add_src2 = Mux(io.bits.alu_op(1) === 1.U, ~io.bits.src2,io.bits.src2)
    val add_res  = (add_src1 +& add_src2) + cin
    //logic
    val and_res  = io.bits.src1 & io.bits.src2
    val or_res   = io.bits.src1 | io.bits.src2
    val xor_res  = io.bits.src1 ^ io.bits.src2
    //shift
    val shift_len   = io.bits.src2(5, 0)
    val shift_len_w = io.bits.src2(4, 0)
    val sll         = io.bits.src1 << shift_len
    val srl         = io.bits.src1 >> shift_len
    val sra         = (io.bits.src1.asSInt) >> shift_len
    val srlw        = (io.bits.src1(31, 0)) >> shift_len_w
    val sraw        = ((io.bits.src1(31, 0)).asSInt) >> shift_len_w
    //io
    io.bits.cout     := add_res(w)
    io.bits.overflow := Mux(io.bits.alu_op(0) === 1.U, 
        ( ~(io.bits.src1(w-1) ^ io.bits.src2(w-1)) & (io.bits.src1(w-1) ^ add_res(w-1)) ),
        (  (io.bits.src1(w-1) ^ io.bits.src2(w-1)) & (io.bits.src1(w-1) ^ add_res(w-1)) )
    )
    //mul
    val mul_src2_msb = Mux(io.bits.alu_op(13) === 1.U, 0.U(1.W), io.bits.src2(w - 1))
    val mul_res_s_t  = Cat(io.bits.src1(w - 1), io.bits.src1(w - 1, 0)).asSInt * Cat(mul_src2_msb, io.bits.src2(w - 1, 0)).asSInt
    val mul_res_u_t  = Cat(0.U(1.W)   , io.bits.src1(w - 1, 0)).asUInt * Cat(0.U(1.W)    , io.bits.src2(w - 1, 0)).asUInt
    val mul_res_w_t  = io.bits.src1(31, 0) * io.bits.src2(31, 0)

    val my_mul = Module(new MultUnit(w))
    my_mul.io.bits.flush        := io.bits.alu_flush
    my_mul.io.bits.mulw         := io.bits.alu_op(14)
    my_mul.io.bits.mul_signed   := Mux(io.bits.alu_op(13) === 1.U, "b10".U, 
                                        Mux(io.bits.alu_op(12) === 1.U, "b00".U, "b11".U))
    my_mul.io.bits.multiplicand := io.bits.src1
    my_mul.io.bits.multiplier   := io.bits.src2
    val mul_res_s = Cat(my_mul.io.bits.result_hi, my_mul.io.bits.result_lo)
    val mul_res_u = mul_res_s
    val mul_res_w = Cat(Fill(w-32, my_mul.io.bits.result_lo(31)),  my_mul.io.bits.result_lo(31, 0))


    //div
    val div_res   = io.bits.src1.asSInt / io.bits.src2.asSInt
    val divu_res  = io.bits.src1 / io.bits.src2
    val divw_res  = io.bits.src1(31, 0).asSInt / io.bits.src2(31, 0).asSInt
    val divuw_res = io.bits.src1(31, 0) / io.bits.src2(31, 0)
    //rem 
    val rem_res   = io.bits.src1.asSInt % io.bits.src2.asSInt
    val remu_res  = io.bits.src1 % io.bits.src2
    val remw_res  = io.bits.src1(31, 0).asSInt % io.bits.src2(31, 0).asSInt
    val remuw_res = io.bits.src1(31, 0) % io.bits.src2(31, 0)
    io.bits.res      := Mux1H(Seq(
        /* add    */ io.bits.alu_op(0)  -> add_res(w-1, 0),
        /* sub    */ io.bits.alu_op(1)  -> add_res(w-1, 0),
        /* and    */ io.bits.alu_op(2)  -> and_res,
        /* or     */ io.bits.alu_op(3)  -> or_res,
        /* xor    */ io.bits.alu_op(4)  -> xor_res,
        /* sll    */ io.bits.alu_op(5)  -> sll(w - 1, 0),
        /* srl    */ io.bits.alu_op(6)  -> srl,
        /* sra    */ io.bits.alu_op(7)  -> sra.asUInt,
        /* srlw   */ io.bits.alu_op(8)  -> srlw,
        /* sraw   */ io.bits.alu_op(9)  -> sraw.asUInt,
        /* mul    */ io.bits.alu_op(10) -> mul_res_s(w - 1    , 0).asUInt,
        /* mulh   */ io.bits.alu_op(11) -> mul_res_s(2 * w - 1, w).asUInt,
        /* mulhu  */ io.bits.alu_op(12) -> mul_res_u(2 * w - 1, w)       ,
        /* mulhsu */ io.bits.alu_op(13) -> mul_res_s(w - 1    , 0).asUInt,
        /* mulw   */ io.bits.alu_op(14) -> mul_res_w.asUInt,
        /* div    */ io.bits.alu_op(15) -> div_res.asUInt,
        /* divu   */ io.bits.alu_op(16) -> divu_res,
        /* divw   */ io.bits.alu_op(17) -> Cat(Fill(w - 32, divw_res(31)) , divw_res(31, 0)).asUInt,
        /* divuw  */ io.bits.alu_op(18) -> Cat(Fill(w - 32, divuw_res(31)), divuw_res(31, 0)),
        /* rem    */ io.bits.alu_op(19) -> rem_res.asUInt,
        /* remu   */ io.bits.alu_op(20) -> remu_res,
        /* remw   */ io.bits.alu_op(21) -> Cat(Fill(w - 32, remw_res(31)) , remw_res(31, 0)).asUInt,
        /* remuw  */ io.bits.alu_op(22) -> Cat(Fill(w - 32, remuw_res(31)), remuw_res(31, 0)),
    ))

    io.bits.ready    := Mux(is_mul, my_mul.io.ready, io.valid) //TODO: div

    //for debug
    io.bits.test_eq  := Mux( io.bits.alu_op(14) === 1.U, mul_res_w === mul_res_w_t,  //TODO: div
                                Mux(io.bits.alu_op(13, 10).orR === 1.U, mul_res_s.asUInt === mul_res_s_t, 0.B) )
    io.bits.out_valid := Mux(is_mul, my_mul.io.bits.out_valid, io.fire) //TODO: div
}