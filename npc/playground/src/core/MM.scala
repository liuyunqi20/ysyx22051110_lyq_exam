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
    io.clint_out.en   := in.req.valid && clint_out.clint_hit
    io.clint_out.wr   := in.req.wr
    io.clint_out.addr := in.req.addr
    
    axi_out.req.bits  := in.req.bits
    axi_out.req.valid := in.req.valid  && !clint_out.clint_hit

    in.req.ready      := Mux(clint_out.clint_hit, true.B, axi_out.req.ready)
    in.ret.valid      := Mux(clint_out.ret_valid, true.B, axi_out.ret.valid)
    in.ret.rdata      := axi_out.ret.rdata
    in.ret.last       := Mux(clint_out.ret_valid, true.B, axi_out.ret.last)
}