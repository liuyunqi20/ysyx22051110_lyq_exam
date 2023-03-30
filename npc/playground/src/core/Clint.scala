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
    val mtimecmp = RegInit(0.U(w.W))
    when(io.en && io.wr && (io.waddr === MTIMECMP_ADDR.U(w.W))){
        mtimecmp := io.wdata
        mtime    := 0.U
    }
    when(io.en && io.wr && (io.waddr === MTIME_ADDR.U(w.W))){
        mtime    := io.wdata
    } .other{
        mtime    := mtime + 1
    }
    io.has_intr_t := mtime >= mtimecmp
}