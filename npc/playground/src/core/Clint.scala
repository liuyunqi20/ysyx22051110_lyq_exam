package mycpu
import chisel3._
import chisel3.util._

trait HasClintConst{
    val MTIME_ADDR    = 0xBFF8
    val MTIMECMP_ADDR = 0x4000
}

class Clint(w: Int) extends Module with HasClintConst{
    val io = IO(new Bundle{
        val in         = Flipped(new ClintIOBundle(w))
        val has_intr_t = Output(Bool())
    })
    val mtime         = RegInit(0.U(w.W))
    val mtimecmp      = RegInit("hffffffffffffffff".U(w.W))
    val hit_mtime     = io.in.waddr === MTIME_ADDR.U(w.W)
    val hit_mtimecmp  = io.in.waddr === MTIMECMP_ADDR.U(w.W)
    val wen           = io.in.en && io.in.wr
    val io.clint_hit  = hit_mtime || hit_mtimecmp
    when(wen && hit_mtimecmp){
        mtimecmp := io.in.wdata
    }
    when(wen && hit_mtime){
        mtime    := io.in.wdata
    } .elsewhen(wen && hit_mtimecmp){
        mtime    := 0.U(w.W)
    } .otherwise {
        mtime    := mtime + 1.U
    }
    //ret
    val ret_valid     = RegInit(0.U(1.W))
    when(io.clint_hit && wen){
        ret_valid := 1.U
    } .elsewhen(ret_valid === 1.U){
        ret_valid := 0.U
    }
    io.ret_valid := ret_valid
    //interrupt trigger
    io.has_intr_t := (mtime >= mtimecmp)
}