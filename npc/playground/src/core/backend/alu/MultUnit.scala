package mycpu
import chisel3._
import chisel3.util._

class MultUnit(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(Decoupled(new MultUnitInBundle(w)))
        val out = Valid(new MultUnitOutBundle(w)) 
    })
    val mult_core = Module(new MultShiftAdd(w))
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
    val working = cnt.orR === 1.U
    when(io.in.bits.flush || cnt(w-1) === 1.U){
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
    add_vec(w-1) := Mux(signed_r(0), Cat(Mux(src2_r(w-1), rvs_src1(2*w - w - 2, 0), 0.U), 0.U),
                                     Cat(Mux(src2_r(w-1), src1_r(2*w - w - 2, 0)  , 0.U), 0.U) )
    val cur_add = Mux1H( for( i <- 0 until w) yield (cnt(i) -> add_vec(i)))
    when(working) {
        res_r := cur_add + res_r
    }
    // ------------------------ done  ------------------------ 
    when(done) { 
        done := 0.B
    }.elsewhen(cnt(w-1) === 1.U) {
        done := 1.B
    }

    io.in.ready  := ~working
    io.out.valid := done
    io.out.bits.result_hi := res_r(2 * w - 1, w)
    io.out.bits.result_lo := res_r(w - 1, 0)
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