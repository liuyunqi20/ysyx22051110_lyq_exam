package mycpu
import chisel3._
import chisel3.util._

trait HasMMCConst{
    val memory_base = 0x80000000
    val io_base     = 0x80000000
}
/*
    This module(MC) is to controll direction of memory access. MC checks if address is in
reg maps area or mmio area. In simulation, mmio is done by AXISram, the same as normal
memory access, thus MC does not divide mmio and normal memory access.
*/
class ysyx_22051110_MemoryController(w: Int, block_word_n: Int) extends Module{
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

/*
    A simple module for checking if addresss is in mmio or reg maps.
mthrough is 1 when address is less than memory base(0x80000000) or
higher or equal than mmio base(0xa0000000)
*/
class ysyx_22051110_MemoryMappingUnit(w: Int) extends Module{
    val io = IO(new Bundle{
        val addr_in = Input(UInt(w.W))
        val mthrough = Output(Bool())
    })
    val hi = io.addr_in(31, 29)
    val no_mem = ~(hi(2)) || // < 0x80000000
                 (hi(1, 0) =/= 0.U)  // > 0xa0000000
    io.mthrough := no_mem
}