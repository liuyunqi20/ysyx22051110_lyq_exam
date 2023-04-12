package mycpu
import chisel3._
import chisel3.util._

class AXIArbiter(w: Int) extends Module{
    val io = IO(new Bundle{
        val rd_IFU = Flipped(new ReadMemBundle(w))
        val wt_IFU = Flipped(new WriteMemBundle(w))
        val rd_MSU = Flipped(new ReadMemBundle(w))
        val wt_MSU = Flipped(new WriteMemBundle(w))
        val mem_rd = new ReadMemBundle(w)
        val mem_wt = new WriteMemBundle(w)
    })
    io.mem_rd <> io.rd_IFU
    io.mem_wt <> io.wt_MSU

}