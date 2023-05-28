package mycpu
import chisel3._
import chisel3.util._

class MultUnit(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Decoupled(new MultUnitInBundle(w))
        val out = Valid(new MultUnitOutBundle(w)) 
    })
    val mult_core = Module(new MultShiftAdd(w))
    io <> mult_core.io
}

class MultShiftAdd(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Decoupled(new MultUnitInBundle(w))
        val out = Valid(new MultUnitOutBundle(w)) 
    })
    val src1_r   = RegInit(0.U((2*w).W))
    val src2_r   = RegInit(0.U(w.W))
    val signed_r = RegInit(0.U(2.W))
    val mulw_r   = RegInit(0.B)
    val res_r    = RegInit( 0.U(( (2*w).W )) )
    val cnt      = RegInit(0.U(w.W))
    val done     = RegInit(0.B)
    //counter
    when(io.in.bits.flush || cnt(w-1) === 1.U){
        cnt := 0.U
    }.elsewhen(io.in.fire){
        cnt := 1.U
    }.otherwise{
        cnt := Cat(cnt(w-1, 0), cnt(w))
    }

    //input buffer
    when(io.in.fire){
        src1_r   := io.in.bits.multiplicand
        src2_r   := io.in.bits.multiplier
        mulw_r   := io.in.bits.mulw
        signed_r := io.in.bits.mul_signed
    }
    //add accumulate
    val add_vec = Wire(Vec(w, UInt((2*w).W)))
    add_vec(0) := Mux(src2_r(0), src1_r, 0.U((2*w).W) )
    for( i <- 1 until w) {
        add_vec(i) := Cat(Mux(src2_r(i), src1_r(2*w - 1, i), 0.U((2*w - i).W) ), 0.U(i.W))
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
    io.out.valid := done
    io.out.bits.result_hi := res_r(2 * w - 1, w)
    io.out.bits.result_lo := res_r(w - 1, 0)
}