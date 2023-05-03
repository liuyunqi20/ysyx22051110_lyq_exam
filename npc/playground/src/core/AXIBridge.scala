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

class AXIBridge(w: Int) extends Module{
    val io = IO(new Bundle{
        val in  = Flipped(new CPUMemBundle(w))
        val out = new AXI4LiteBundle(w)
    })
    val state = RegInit(s_idle.U(state_w.W))
    state := Mux1H(Seq(
        /* IDLE    */state(0) -> Mux(io.out.ar.fire, s_read_resp.U , Mux(io.out.aw.fire, s_write_data, s_idle.U)),
        /* RD RESP */state(1) -> Mux(io.out.rd.fire, s_idle.U      , s_read_resp.U),
        /* WT DATA */state(2) -> Mux(io.out.wt.fire, s_write_resp.U, s_write_data.U),
        /* WT RESP */state(3) -> Mux(io.out.b.fire , s_idle.U      , s_write_resp.U),
    ))
    //read
    io.out.ar.valid       = io.in.en && ~io.in.wr && state(0)
    io.out.ar.bits.araddr = io.in.addr
    io.out.ar.bits.arprot = 0.U(3.W)
    io.out.rd.ready       = state(1)
    io.in.rdata           = io.out.rd.rdata
    //write
    val wdata_r = RegInit(0.U(w.W))
    val wstrb_r = RegInit(0.U((w/8).W))
    when(io.in.addr_ok){
        wdata_r := io.in.wdata
        wstrb_r := io.in.wstrb
    }
    io.out.aw.valid       = io.in.en && io.in.wr && state(0)
    io.out.aw.bits.awaddr = io.in.addr
    io.out.aw.bits.awprot = 0.U(3.W)
    io.out.wt.valid       = state(2)
    io.out.wt.bits.wdata  = wdata_r
    io.out.wt.bits.wstrb  = wstrb_r
    //read/write ok
    io.in.addr_ok = io.out.ar.fire || io.out.wt.fire
    io.in.data_ok = io.out.rd.fire || io.out.b.fire 
}