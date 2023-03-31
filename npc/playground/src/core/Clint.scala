package mycpu
import chisel3._
import chisel3.util._

trait HasClintConst{
    val MTIME_ADDR    = 0xBFF8
    val MTIMECMP_ADDR = 0x4000
}

class Clint(w: Int) extends Module with HasClintConst{
    val io = IO(new Bundle{
        val en         = Input(Bool())
        val wr         = Input(Bool())
        val waddr      = Input(UInt(w.W))
        val wdata      = Input(UInt(w.W))
        val has_intr_t = Output(Bool())
    })
    val mtime    = RegInit(0.U(w.W))
    val mtimecmp = RegInit("hffffffffffffffff".U(w.W))
    val hit_mtime = io.waddr === MTIME_ADDR.U(w.W)
    val hit_mtimecmp = io.waddr === MTIMECMP_ADDR.U(w.W)
    val wen = io.en && io.wr
    when(wen && hit_mtimecmp){
        mtimecmp := io.wdata
    }
    when(wen && hit_mtime){
        mtime    := io.wdata
    } .elsewhen(wen && hit_mtimecmp){
        mtime    := 0.U(w.W)
    } .otherwise {
        mtime    := mtime + 1.U
    }
    io.has_intr_t := (mtime >= mtimecmp) && ~reset
}