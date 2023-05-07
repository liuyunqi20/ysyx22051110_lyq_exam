package mycpu
import chisel3._
import chisel3.util._

trait HasMMCConst{
    val memory_base = 0x80000000
    val io_base     = 0x80000000
}

class MemoryController(w: Int) extends Module{
    val io = IO(new Bundle{
        val in        = Flipped(new CPUMemBundle(w))
        val clint_out = new ClintIOBundle(w)
        val axi_out   = new CPUMemBundle(w)
    })
    io.clint_out.en   := io.in.req.valid && io.clint_out.clint_hit
    io.clint_out.wr   := io.in.req.wr
    io.clint_out.addr := io.in.req.addr
    
    io.axi_out.req.bits  := io.in.req.bits
    io.axi_out.req.valid := io.in.req.valid  && !io.clint_out.clint_hit

    io.in.req.ready      := Mux(io.clint_out.clint_hit, true.B, io.axi_out.req.ready)
    io.in.ret.valid      := Mux(io.clint_out.ret_valid, true.B, io.axi_out.ret.valid)
    io.in.ret.rdata      := io.axi_out.ret.rdata
    io.in.ret.last       := Mux(io.clint_out.ret_valid, true.B, io.axi_out.ret.last)
}