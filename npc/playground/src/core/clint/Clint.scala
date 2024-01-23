package mycpu
import chisel3._
import chisel3.util._

trait HasClintConst{
    val MTIME_ADDR    = 0x200_BFF8
    val MTIMECMP_ADDR = 0x200_4000
}

/*
    Clint module for core local interrupt control. Current design only supports
mtime and mtimecmp register to implements time interrupt function. These 2 regs
are accessed by memory mapping.
*/
class ysyx_22051110_Clint(w: Int) extends Module with HasClintConst{
    val io = IO(new Bundle{
        val in         = Flipped(new ClintIOBundle(w))
        val has_intr_t = Output(Bool())
        val clr_intr_t = Output(Bool())
    })
    val mtime         = RegInit(0.U(w.W))
    val mtimecmp      = RegInit(0.U(w.W))
    val hit_mtime     = io.in.addr === MTIME_ADDR.U(w.W)
    val hit_mtimecmp  = io.in.addr === MTIMECMP_ADDR.U(w.W)
    val wen           = io.in.en && io.in.wr
    val ren           = io.in.en && !io.in.wr
    val rdata         = RegInit(0.U(w.W))
    when(wen && hit_mtimecmp){
        mtimecmp := io.in.wdata
    }
    when(wen && hit_mtime){
        mtime    := io.in.wdata
    } .otherwise {
        mtime    := mtime + 1.U
    }
    when(ren && hit_mtimecmp)
    {
        rdata := mtimecmp
    } .elsewhen(ren && hit_mtime)
    {
        rdata := mtime
    }
    io.in.rdata := rdata
    //ret
    io.in.clint_hit      := hit_mtime || hit_mtimecmp
    val ret_valid         = RegInit(0.U(1.W))
    when(io.in.en && io.in.clint_hit){
        ret_valid := 1.U
    } .elsewhen(ret_valid === 1.U){
        ret_valid := 0.U
    }
    io.in.ret_valid := ret_valid
    //interrupt trigger
    io.has_intr_t := (mtime >= mtimecmp)
    io.clr_intr_t := wen && hit_mtimecmp
}