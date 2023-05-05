package mycpu
import chisel3._
import chisel3.util._

trait HasMMConst{
    val memory_base  = 0x80000000
    val io_base      = 0xa0000000
}

class MemoryMappingController(w: Int, nr_port: Int) extends Module with HasMMConst{
    val io = IO(new Bundle{
        val mm = Vec(nr_port, new MMBundle(w))
    })
    val up_mem = io.addr(w - 1) === 1.U // >= 0x80000000
    val up_io  = io.addr(w - 1, w - 3) === "0x101".U // >= 0xa0000000
    val io.is_mmio  := up_io    // mmio: >= 0xa0000000
    val io.is_clint := ~up_mem  // clint: <= 0x80000000
}