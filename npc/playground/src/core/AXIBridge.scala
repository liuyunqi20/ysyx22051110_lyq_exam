package mycpu
import chisel3._
import chisel3.util._

class AXIBridge(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(new CPUMemBundle(w))
        val out = new AXI4LiteBundle(w)
    })
    //TODO:
}