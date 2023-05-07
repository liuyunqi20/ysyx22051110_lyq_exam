package mycpu
import chisel3._
import chisel3.util._

trait HasAXIBridgeConst{
    val state_w           = 4
    val s_idle            = 0x01
    val s_read_resp       = 0x02
    val s_write_data      = 0x04
    val s_write_resp      = 0x08
}

class AXIBridge(w: Int, block_word_n: Int) extends Module with HasAXIBridgeConst{
    val io = IO(new Bundle{
        val in  = Flipped(new CPUMemBundle(w))
        val out = new AXI4LiteBundle(w)
    })
    val state = RegInit(s_idle.U(state_w.W))
    state := Mux1H(Seq(
        /* IDLE    */ state(0) -> Mux(io.out.ar.fire, s_read_resp.U , Mux(io.out.aw.fire, s_write_data.U, s_idle.U)),
        /* RD RESP */ state(1) -> Mux(io.out.rd.fire && io.out.rd.bits.rlast === 1.U, s_idle.U, s_read_resp.U),
        /* WT DATA */ state(2) -> Mux(io.out.wt.fire && io.out.wt.bits.wlast === 1.U, s_write_resp.U, s_write_data.U),
        /* WT RESP */ state(3) -> Mux(io.out.b.fire , s_idle.U, s_write_resp.U),
    ))
    val wr_r = RegInit(0.B)
    when(io.out.ar.fire) { wr_r := 0.B } .elsewhen(io.out.aw.fire) { wr_r := 1.B }
    //read
    io.out.ar.valid        := io.in.req.valid && (io.in.req.bits.wr === 0.U) && state(0)
    io.out.ar.bits.araddr  := io.in.req.bits.addr
    io.out.ar.bits.arprot  := 0.U(3.W)
    io.out.ar.bits.arlen   := Mux(io.in.req.bits.mthrough, 0.U(8.W), (block_word_n - 1).U(8.W))
    io.out.ar.bits.arsize  := log2Ceil(w).U(3.W)
    io.out.ar.bits.arburst := "b10".U(2.W)
    io.out.rd.ready        := state(1)
    io.in.ret.rdata        := io.out.rd.bits.rdata
    //write
    io.out.aw.valid        := io.in.req.valid && (io.in.req.bits.wr === 1.U) && state(0)
    io.out.aw.bits.awaddr  := io.in.req.bits.addr
    io.out.aw.bits.awprot  := 0.U(3.W)
    io.out.aw.bits.awlen   := Mux(io.in.req.mthrough, 0.U(8.W), (block_word_n - 1).U(8.W))
    io.out.aw.bits.awsize  := log2Ceil(w).U(3.W)
    io.out.aw.bits.awburst := "b10".U(2.W)
    io.out.wt.valid        := state(2)
    io.out.wt.bits.wdata   := io.in.req.bits.wdata
    io.out.wt.bits.wstrb   := io.in.req.bits.wstrb
    io.out.b.ready         := state(3)
    //read/write ok
    io.in.req.ready := io.out.ar.fire || io.out.wt.fire
    io.in.ret.valid := io.out.rd.fire || io.out.b.fire 
    io.in.ret.last  := Mux(wr_r, io.out.rd.bits.rlast, io.out.wt.bits.wlast)
}