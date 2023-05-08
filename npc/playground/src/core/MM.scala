package mycpu
import chisel3._
import chisel3.util._

trait HasMMCConst{
    val memory_base = 0x80000000
    val io_base     = 0x80000000
}

class MemoryController(w: Int, block_word_n: Int) extends Module{
    val io = IO(new Bundle{
        val in        = Flipped(new CPUMemBundle(w, block_word_n * w))
        val clint_out = new ClintIOBundle(w)
        val axi_out   = new CPUMemBundle(w, block_word_n * w)
    })
    val io_widx         = io.in.req.bits.addr(log2Ceil(block_word_n) + log2Ceil(8) - 1, log2Ceil(8))
    val io_wdata        = MuxLookup(io_widx, 0.U, 
                            for(i <- 0 until block_word_n) yield ((i.U) -> io.in.req.bits.wdata((i+1)*w-1, i*w)) )
    io.clint_out.en    := io.in.req.valid && io.clint_out.clint_hit
    io.clint_out.wr    := io.in.req.bits.wr
    io.clint_out.addr  := io.in.req.bits.addr
    io.clint_out.wdata := io_wdata
    
    io.axi_out.req.bits  := io.in.req.bits
    io.axi_out.req.valid := io.in.req.valid  && !io.clint_out.clint_hit

    io.in.req.ready      := Mux(io.clint_out.clint_hit, true.B, io.axi_out.req.ready)
    io.in.ret.valid      := Mux(io.clint_out.ret_valid, true.B, io.axi_out.ret.valid)
    io.in.ret.rdata      := io.axi_out.ret.rdata
    io.in.rlast          := Mux(io.clint_out.ret_valid, true.B, io.axi_out.rlast)
}