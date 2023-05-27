package mycpu
import chisel3._
import chisel3.util._

class MultUnit(w: Int) extends Module{
    val io = IO(Flipped(Decoupled(new MultUnitBundle(w))))
    val mult_core = Module(new MultShiftAdd(w))
    io <> mult_core.io
}

class MultShiftAdd(w: Int) extends Module{
    val io = IO(Flipped(Decoupled(new MultUnitBundle(w))))
    val src1_r   = RegInit(0.U((2*w).W))
    val src2_r   = RegInit(0.U(w.W))
    val signed_r = RegInit(0.U(2.W))
    val mulw_r   = RegInit(0.B)
    val res_r    = RegInit( 0.U(( (2*w).W )) )
    val cnt      = RegInit(0.U(w.W))
    val done     = RegInit(0.B)
    //counter
    when(io.bits.flush || cnt(w-1) === 1.U){
        cnt := 0.U
    }.elsewhen(io.fire){
        cnt := 1.U
    }.otherwise{
        cnt := Cat(cnt(w-1, 0), cnt(w))
    }

    //input buffer
    when(io.fire){
        src1_r   := io.bits.multiplicand
        src2_r   := io.bits.multiplier
        mulw_r   := io.bits.mulw
        signed_r := io.bits.mul_signed
    }
    //add accumulate
    val add_vec = Wire(Vec(w, UInt((2*w).W)))
    for( i <- 0 until w) {
        add_vec(i) := Mux(src2_r(i), Cat(src1_r(2*w - 1, i), Fill(i, 0.U(1.W))), 0.U((2*w).W))
    }
    val cur_add = Mux1H( for( i <- 0 until w) yield (cnt(i) -> add_vec(i)))
    when(cnt.orR) {
        res_r := cur_add + res_r
    }

    when(done) { 
        done := 0.B
    }.elsewhen(cnt(w-1) === 1.U) {
        done := 1.B
    }
    io.bits.out_valid := done
    io.bits.result_hi := res_r(2 * w - 1, w)
    io.bits.result_lo := res_r(w - 1, 0)
}