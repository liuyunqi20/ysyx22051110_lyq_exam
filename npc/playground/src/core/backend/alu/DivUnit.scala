package mycpu
import chisel3._
import chisel3.util._

class DivUnit(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(Decoupled(new DivUnitInBundle(w)))
        val out = Valid(new DivUnitOutBundle(w))
    })
    val div_core = Module(new DivRestoreRem(w))
    io <> div_core.io
}

class DivRestoreRem(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(Decoupled(new DivUnitInBundle(w)))
        val out = Valid(new DivUnitOutBundle(w))
    })
    val dividend_r = RegInit(0.U((2*w).W))
    val divisor_r  = RegInit(0.U(w.W))
    val quotient_r = RegInit(0.U(w.W))
    val reminder_r = RegInit(0.U(w.W))
    val divw_r     = RegInit(0.B)
    val signed_r   = RegInit(0.B)
    val sel_q_sign = RegInit(0.B)  // b1: neg, b0: pos
    val sel_r_sign = RegInit(0.B)  // b1: neg, b0: pos
    val done       = RegInit(0.B)
    val cnt        = RegInit(0.U(w.W))

    // ------------------------ counter ------------------------ 
        val last_step = (cnt(w-1) === 1.U && ~divw_r) || (cnt(31)  === 1.U && divw_r)
        val working   = cnt.orR === 1.U
        when(io.in.bits.flush || last_step){
            cnt := 0.U
        }.elsewhen(io.in.fire){
            cnt := 1.U
        }.otherwise{
            cnt := Cat(cnt(w-2, 0), 0.U(1.W))
        }

    // ------------------------ input buffer ------------------------ 
        val dividend_msb = Mux(io.in.bits.divw, io.in.bits.dividend(31), io.in.bits.dividend(w - 1))
        val divisor_msb  = Mux(io.in.bits.divw, io.in.bits.divisor(31) , io.in.bits.divisor(w - 1))
        when(io.in.fire){
            dividend_r := Cat(0.U(w.W), Mux(io.in.bits.div_signed && dividend_msb, ~io.in.bits.dividend + 1.U, 
                                                                                    io.in.bits.dividend))
            divisor_r  := Mux(io.in.bits.div_signed && divisor_msb, ~io.in.bits.divisor  + 1.U, io.in.bits.divisor)
            quotient_r := 0.U
            reminder_r := 0.U
            divw_r     := io.in.bits.divw
            signed_r   := io.in.bits.div_signed
            sel_q_sign := io.in.bits.div_signed && (dividend_msb ^ divisor_msb)
            sel_r_sign := io.in.bits.div_signed &&  dividend_msb
        }
    
    // ------------------------ add accumulate ------------------------ 
        //add_src1/2 is w+1 bits wide
        val add_src1  = Mux(divw_r, Cat(0.U((w - 32).W), dividend_r(63, 31)), dividend_r(2 * w - 1, w - 1))
        val add_src2  = ~Cat(0.U(1.W), Mux(divw_r, Cat(0.U((w - 32).W), divisor_r(31, 0)), divisor_r)) + 1.U
        val add_res   = add_src1 + add_src2
        val next_valw = Cat(dividend_r(2*w - 1, w), Mux(add_res(w), Cat(dividend_r(w - 2, 0), 0.U(1.W)), 
                                                                    Cat(add_res(w - 33, 0), dividend_r(30, 0), 0.U(1.W)))  )
        val next_val  = Mux(add_res(w), Cat(dividend_r(2*w - 2, 0), 0.U(1.W)),  
                                        Cat(add_res(w - 1, 0), dividend_r(w - 2, 0), 0.U(1.W))  )
        when(working){
            dividend_r := Mux(divw_r, next_valw, next_val)
            quotient_r := Cat(quotient_r(w - 2, 0), ~add_res(w)) // if less than 0 after sub then set 0
            reminder_r := Mux(add_res(w), add_src1(w - 1, 0), add_res(w - 1, 0))
        }
        val rvs_quotient_r = ~quotient_r + 1.U
        val rvs_reminder_r = ~reminder_r + 1.U
    // ------------------------ done  ------------------------ 
        when(done) { 
            done := 0.B
        }.elsewhen(last_step) {
            done := 1.B
        }

    io.in.ready  := ~working
    io.out.valid := done
    io.out.bits.quotient := Mux(sel_q_sign, rvs_quotient_r, quotient_r)
    io.out.bits.reminder := Mux(sel_r_sign, rvs_reminder_r, reminder_r)
}

