package mycpu
import chisel3._
import chisel3.util._

trait HasClintConst{
    val MTIME_ADDR    = 0xBFF8
    val MTIMECMP_ADDR = 0x4000
}

class Clint(w: Int) extends Module with HasClintConst{
    val io = IO(new Bundle{
        val en  = Input(Bool)
        val wr = Input(Bool())
        val waddr = Input(UInt(w.W))
        val wdata = Input(UInt(w.W))
        val has_intr_t = Output(Bool())
    })
    val mtime    = RegInit(0.U(w.W))
    val mtimecmp = RegInit(0.U(w.W))
    when(en && wr && (waddr === MTIMECMP_ADDR)){
        mtimecmp := wdata
        mtime    := 0
    } .elsewhen(en && wr && (waddr === MTIME_ADDR)){
        mtime    := wdata
    }
    io.has_intr_t := mtime >= mtimecmp
}