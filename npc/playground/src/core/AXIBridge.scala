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

/*
    AXI Bridge transform SimpleBus from CPU into AXI Bus signals.
    AXI Bridge only supports no-burst r/w and wrap burst write.
*/
class AXIBridge(w: Int, block_word_n: Int) extends Module with HasAXIBridgeConst{
    val io = IO(new Bundle{
        val in  = Flipped(new CPUMemBundle(w, block_word_n * w))
        val out = new AXI4LiteBundle(w)
    })
    val state = RegInit(s_idle.U(state_w.W))
    state := Mux1H(Seq(
        /* IDLE    */ state(0) -> Mux(io.out.ar.fire, s_read_resp.U , Mux(io.out.aw.fire, s_write_data.U, s_idle.U)),
        /* RD RESP */ state(1) -> Mux(io.out.rd.fire && io.out.rd.bits.rlast === 1.U, s_idle.U, s_read_resp.U),
        /* WT DATA */ state(2) -> Mux(io.out.wt.fire && io.out.wt.bits.wlast === 1.U, s_write_resp.U, s_write_data.U),
        /* WT RESP */ state(3) -> Mux(io.out.b.fire , s_idle.U, s_write_resp.U),
    ))
    val rd_widx_r           = RegInit(0.U(log2Ceil(block_word_n).W))
    val rd_after_wt_r       = RegInit(0.B)
    val wdata_r             = RegInit(0.U((block_word_n * w).W))
    val waddr_r             = RegInit(0.U((w - log2Ceil(block_word_n) - log2Ceil(w/8)).W))
    val wstrb_r             = RegInit(0.U((w/8).W))
    val init_widx           = io.in.req.bits.addr(log2Ceil(block_word_n) + log2Ceil(w/8) - 1, log2Ceil(w/8))
    val burst_idx           = RegInit(0.U(log2Ceil(block_word_n).W))
    val burst_cnt           = RegInit(0.U(log2Ceil(block_word_n).W))
    val burst_len           = RegInit(0.U(8.W))
    //read
    when(rd_after_wt) { 
        rd_widx_r     := io.in.req.bits.addr(log2Ceil(block_word_n) + log2Ceil(w/8) - 1, log2Ceil(w/8)) 
        rd_after_wt_r := 1.B
    } .elsewhen(io.in.rlast) {
        rd_after_wt_r := 0.B
    }
    io.out.ar.valid        := io.in.req.valid && (io.in.req.bits.wr === 0.U) && state(0) && !rd_after_wt
    io.out.ar.bits.araddr  := io.in.req.bits.addr
    io.out.ar.bits.arprot  := 0.U(3.W)
    io.out.ar.bits.arlen   := Mux(io.in.req.bits.mthrough === 1.U, 0.U(8.W), (block_word_n - 1).U(8.W))
    io.out.ar.bits.arsize  := log2Ceil(w).U(3.W)
    io.out.ar.bits.arburst := "b10".U(2.W)
    io.out.rd.ready        := state(1)
    io.in.ret.rdata        := Mux(rd_after_wt_r, wdata_r((rd_widx_r + 1)*w - 1, rd_widx_r*w), io.out.rd.bits.rdata)
    io.in.rlast            := Mux(rd_after_wt_r, 1.B, io.out.rd.bits.rlast)
    //write
    when(io.in.req.fire && io.in.req.bits.wr) { 
        wdata_r := io.in.req.bits.wdata 
        waddr_r   := io.in.req.bits.addr(w - 1, log2Ceil(block_word_n) + log2Ceil(w/8))
        wstrb_r   := io.in.req.bits.wstrb
        burst_idx := init_widx
        burst_len := io.out.aw.bits.awlen
        burst_cnt := 0.U
    } .elsewhen(io.in.wt.fire) {
        burst_idx := Mux(burst_idx === Fill(log2Ceil(block_word_n), 1.U(1.W)), 0.U, burst_idx + 1.U)
        burst_cnt := burst_cnt + 1.U
    } .elsewhen(io.out.b.fire){
        waddr_r   := 0.U
        burst_cnt := 0.U
    } 
    io.out.aw.valid        := io.in.req.valid && (io.in.req.bits.wr === 1.U) && state(0)
    io.out.aw.bits.awaddr  := io.in.req.bits.addr
    io.out.aw.bits.awprot  := 0.U(3.W)
    io.out.aw.bits.awlen   := Mux(io.in.req.bits.mthrough === 1.U, 0.U(8.W), (block_word_n - 1).U(8.W))
    io.out.aw.bits.awsize  := log2Ceil(w).U(3.W)
    io.out.aw.bits.awburst := "b10".U(2.W)
    io.out.wt.valid        := state(2)
    io.out.wt.bits.wdata   := wdata_r(burst_idx)
    io.out.wt.bits.wstrb   := wstrb_r
    io.out.wt.bits.wlast   := burst_cnt === burst_len(log2Ceil(block_word_n) - 1, 0)
    io.out.b.ready         := state(3)
    //read after write
    rd_after_wt           = io.in.req.valid && (io.in.req.bits.wr === 0.U) && state(0) &&
                            (io.in.req.bits.mthrough === 0.U) && 
                            (waddr_r === io.in.req.bits.addr(w - 1, log2Ceil(block_word_n) + log2Ceil(w/8)))
    //read/write ok
    io.in.req.ready      := io.out.ar.fire || io.out.wt.fire || rd_after_wt
    io.in.ret.valid      := io.out.rd.fire || ((state(2) === 1.U) && (burst_cnt === 0.U)) || rd_after_wt_r
}