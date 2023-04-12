package mycpu
import chisel3._
import chisel3.util._

trait HasArbiterConst{
    val s_idle   = 0x1
    val s_rd_IFU = 0x2
    val s_rd_MSU = 0x4
    val nr_state = 3
}

class AXIArbiter(w: Int) extends Module with HasArbiterConst{
    val io = IO(new Bundle{
        //read
        val rd_IFU     = Flipped(new ReadMemBundle(w))
        val sel_rd_IFU = Output(Bool())
        val rd_MSU = Flipped(new ReadMemBundle(w))
        val sel_rd_MSU = Output(Bool())
        //write
        val wt_IFU = Flipped(new WriteMemBundle(w))
        val shk_wt_IFU = Decoupled(Bits(0.W))
        val wt_MSU = Flipped(new WriteMemBundle(w))
        val shk_wt_MSU = Decoupled(Bits(0.W))
        val mem_rd = new ReadMemBundle(w)
        val mem_wt = new WriteMemBundle(w)
    })
    // --------------------- read arbiter  ------------------------ 
    //generate arbiter input vector
    val arbiter_in = Vec(2, Decoupled(w.W))
    arbiter_in(0).valid := io.rd_IFU.en  
    arbiter_in(0).valid := io.rd_MSU.en
    arbiter_in(1).bits  := io.rd_IFU.addr
    arbiter_in(1).bits  := io.rd_IFU.addr
    //choose signal to read
    val arbiter_rd = Moudle(new Arbiter(UInt(w.W), 2))
    arbiter_rd.io.in <> arbiter_in
    arbiter_rd.io.out.ready := 1.B
    io.mem_rd.en   := arbiter_rd.io.out.valid
    io.mem_rd.wr   := 0.B
    io.mem_rd.addr := arbiter_rd.io.out.bits
    //return read success
    io.sel_rd_IFU := arbiter_rd.io.chosen === 0.U
    io.sel_rd_MSU := arbiter_rd.io.chosen === 1.U
    /*
    val rstate = RegInit(s_idle.U(nr_state.W))
    val has_rd_ready = io.shk_rd_MSU.ready || io.shk_rd_IFU.ready
    rstate := Mux1H(Seq(
        /* Idle     */ rstate(0) -> Mux(has_rd_ready, Mux(io.shk_rd_IFU.ready, s_rd_IFU.U, s_rd_MSU.U), s_idle.U),
        /* IFU read */ rstate(1) -> Mux(io.shk_rd_IFU.fire, s_idle.U, s_rd_IFU.U),
        /* MSU read */ rstate(2) -> Mux(io.shk_rd_MSU.fire, s_idle.U, s_rd_MSU.U),
    ))
    io.mem_rd.en    := has_rd_ready && rstate(0)
    io.mem_rd.wr    := 0.B
    io.mem_rd.addr  := Mux(io.shk_rd_IFU.ready, io.rd_IFU.addr, io.rd_MSU.addr)
    io.shk_rd_IFU.valid := rstate(1)
    io.shk_rd_MSU.valid := rstate(2)
    */
    // --------------------- write arbiter ------------------------ 
    io.shk_wt_IFU.ready := 0.B
    io.shk_wt_MSU.ready := 1.B
    io.mem_wt.en    := io.wt_MSU.en
    io.mem_wt.wr    := io.wt_MSU.wr
    io.mem_wt.addr  := io.wt_MSU.addr
    io.mem_wt.wdata := io.wt_MSU.wdata
    io.mem_wt.wmask := io.wt_MSU.wmask
}