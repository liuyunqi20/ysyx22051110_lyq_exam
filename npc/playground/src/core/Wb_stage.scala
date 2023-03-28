package mycpu
import chisel3._

class Wb_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val mem2wb = Flipped(new MemtoWbBundle(w))
        val wb2rf  = new WbtoRfBundle(w)
    })
    io.wb2rf.rf_we := io.mem2wb.gr_we
    io.wb2rf.waddr := io.mem2wb.dest
    io.wb2rf.wdata := io.mem2wb.result
}