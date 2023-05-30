package mycpu
import chisel3._
import chisel3.util._

class MultUnit(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(Decoupled(new MultUnitInBundle(w)))
        val out = Valid(new MultUnitOutBundle(w)) 
    })
    val mult_core = Module(new MultBooth2(w))
    io <> mult_core.io
}

class MultShiftAdd(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(Decoupled(new MultUnitInBundle(w)))
        val out = Valid(new MultUnitOutBundle(w)) 
    })
    val src1_r   = RegInit(0.U((2*w).W))
    val src2_r   = RegInit(0.U(w.W))
    val signed_r = RegInit(0.U(2.W)) //b11:sxs b10:sxu b00:uxu
    val mulw_r   = RegInit(0.B)
    val res_r    = RegInit( 0.U(( (2*w).W )) )
    val cnt      = RegInit(0.U(w.W))
    val done     = RegInit(0.B)
    // ------------------------ counter ------------------------ 
    val last_step = (cnt(w-1) === 1.U && ~mulw_r) || (cnt(31)  === 1.U && mulw_r)
    val working   = cnt.orR === 1.U
    when(io.in.bits.flush || last_step){
        cnt := 0.U
    }.elsewhen(io.in.fire){
        cnt := 1.U
    }.otherwise{
        cnt := Cat(cnt(w-2, 0), 0.U(1.W))
    }

    // ------------------------ input buffer ------------------------ 
    val rvs_src1 = ~src1_r + 1.U
    when(io.in.fire){
        src1_r   := Cat(Mux(io.in.bits.mul_signed(1), Fill(w, io.in.bits.multiplicand(w-1)), 0.U(w.W)),
                        io.in.bits.multiplicand)
        src2_r   := io.in.bits.multiplier
        mulw_r   := io.in.bits.mulw
        signed_r := io.in.bits.mul_signed
        res_r    := 0.U(w.W)
    }
    // ------------------------ add accumulate ------------------------ 
    //add add_vec(i) to result register in i(th) iteration
    val add_vec = Wire(Vec(w, UInt((2*w).W)))
    add_vec(0) := Mux(src2_r(0), src1_r, 0.U((2*w).W) )
    for( i <- 1 until w-1) {
        add_vec(i) := Cat(Mux(src2_r(i), src1_r(2*w - i - 1, 0), 0.U((2*w - i - 1).W) ), 0.U(i.W))
    }
    //last iteration depends on op type and sign bit
    add_vec(w-1) := Mux(signed_r(0), Cat(Mux(src2_r(w-1), rvs_src1(2*w - w, 0), 0.U), 0.U((w-1).W)),
                                     Cat(Mux(src2_r(w-1), src1_r(2*w - w, 0)  , 0.U), 0.U((w-1).W)) )
    val cur_add = Mux1H( for( i <- 0 until w) yield (cnt(i) -> add_vec(i)))
    when(working) {
        res_r := cur_add + res_r
    }
    // ------------------------ done  ------------------------ 
    when(done) { 
        done := 0.B
    }.elsewhen(last_step) {
        done := 1.B
    }

    io.in.ready  := ~working
    io.out.valid := done
    io.out.bits.result_hi := Mux(mulw_r, Fill(w, res_r(31)), res_r(2 * w - 1, w))
    io.out.bits.result_lo := Cat(Mux(mulw_r, Fill(32, res_r(31)), res_r(w - 1, 32)), res_r(31, 0))
}

class MultBooth2(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(Decoupled(new MultUnitInBundle(w)))
        val out = Valid(new MultUnitOutBundle(w)) 
    })
    val max_cnt  = w/2 + 1
    val src1_r   = RegInit(0.U((2*w + 4).W))
    val src2_r   = RegInit(0.U((w + 3).W))
    val signed_r = RegInit(0.U(2.W)) //b11:sxs b10:sxu b00:uxu
    val mulw_r   = RegInit(0.B)
    val res_r    = RegInit(0.U(((2*w + 4).W)))
    val cnt      = RegInit(0.U(max_cnt.W))
    val done     = RegInit(0.B)
    // ------------------------ counter ------------------------ 
    val last_step = (cnt(max_cnt-1) === 1.U && ~mulw_r) || (cnt(16)  === 1.U && mulw_r)
    val working   = cnt.orR === 1.U
    when(io.in.bits.flush || last_step){
        cnt := 0.U
    }.elsewhen(io.in.fire){
        cnt := 1.U
    }.otherwise{
        cnt := Cat(cnt(w-2, 0), 0.U(1.W))
    }

    // ------------------------ input buffer ------------------------ 
    val src1_double     = Cat(src1_r, 0.U(1.W))
    val src1_neg        = ~src1_r + 1.U
    val src1_double_neg = Cat(src1_neg, 0.U(1.W))
    when(io.in.fire){
        src1_r   := Cat(Mux(io.in.bits.mul_signed(1), Fill(w, io.in.bits.multiplicand(w + 4)), 0.U((w + 4).W)),
                        io.in.bits.multiplicand)
        src2_r   := Cat(Mux(io.in.bits.mul_signed(0), Fill(2, io.in.bits.multiplier(w - 1)), 0.U(2.W)), 
                        io.in.bits.multiplier, 0.U(1.W))
        mulw_r   := io.in.bits.mulw
        signed_r := io.in.bits.mul_signed
        res_r    := 0.U(w.W)
    }
    // ------------------------ booth control ------------------------ 
    val sel   = MuxLookup(src2_r(2, 0), 0.U, List(
        ("b000".U) -> "b00001".U, // 0
        ("b001".U) -> "b00010".U, // + x
        ("b010".U) -> "b00010".U, // + x
        ("b011".U) -> "b00100".U, // + 2x
        ("b100".U) -> "b01000".U, // - 2x
        ("b101".U) -> "b10000".U, // - x
        ("b110".U) -> "b10000".U, // - x
        ("b111".U) -> "b00001".U, // 0
    ))
    val p     = Mux1H(Seq(
        /* 0   */ sel(0) -> 0.U((2*w + 4).W),
        /* +x  */ sel(1) -> src1_r,
        /* +2x */ sel(2) -> src1_double,
        /* -2x */ sel(3) -> src1_double_neg,
        /* -x  */ sel(4) -> src1_neg,
    )) 
    // ------------------------ add accumulate ------------------------ 
    when(working) {
        res_r  := p + res_r
        src1_r := Cat(src1_r(2*w + 1, 0), 0.U(2.W))
        src2_r := Cat(Fill(2, src2_r(w + 2)), src2_r(w + 2, 2))
    }
    // ------------------------ done  ------------------------ 
    when(done) { 
        done := 0.B
    }.elsewhen(last_step) {
        done := 1.B
    }

    io.in.ready  := ~working
    io.out.valid := done
    io.out.bits.result_hi := Mux(mulw_r, Fill(w, res_r(31)), res_r(2 * w - 1, w))
    io.out.bits.result_lo := Cat(Mux(mulw_r, Fill(32, res_r(31)), res_r(w - 1, 32)), res_r(31, 0))
}

// class MultWallaceTree(w: Int) extends Module{
//     def addOneColoumn(col: Seq[Bool], cin: Seq[Bool]): (Seq[Bool], Seq[Bool], Seq[Bool]) {
//         //TODO
//     }



//     val io = IO(new Bundle{
//         val in  = Flipped(Decoupled(new MultUnitInBundle(w)))
//         val out = Valid(new MultUnitOutBundle(w))
//     })
// }