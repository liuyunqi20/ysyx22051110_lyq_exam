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
        val rd_MSU     = Flipped(new ReadMemBundle(w))
        val sel_rd_IFU = Output(Bool())
        val sel_rd_MSU = Output(Bool())
        //write
        val wt_IFU = Flipped(new WriteMemBundle(w))
        val wt_MSU = Flipped(new WriteMemBundle(w))
        val sel_wt_IFU = Output(Bool())
        val sel_wt_MSU = Output(Bool())
        //to pmem access port
        val mem_rd = new ReadMemBundle(w)
        val mem_wt = new WriteMemBundle(w)
    })
    // --------------------- read arbiter  ------------------------ 
    //generate arbiter input vector
    val arbiter_src = IO({ val in = Flipped(Vec(2, Decoupled(Bits(w.W)))) })
    arbiter_src.in(0).valid := io.rd_IFU.en  
    arbiter_src.in(0).valid := io.rd_MSU.en
    arbiter_src.in(1).bits  := io.rd_IFU.addr
    arbiter_src.in(1).bits  := io.rd_IFU.addr
    //choose signal to read
    val arbiter_rd = Module(new Arbiter(UInt(w.W), 2))
    arbiter_rd.io.in <> arbiter_src
    arbiter_rd.io.out.ready := 1.B
    io.mem_rd.en    := arbiter_rd.io.out.valid
    io.mem_rd.wr    := 0.B
    io.mem_rd.addr  := arbiter_rd.io.out.bits
    //return read success
    io.sel_rd_IFU   := arbiter_rd.io.chosen === 0.U
    io.sel_rd_MSU   := arbiter_rd.io.chosen === 1.U
    io.rd_IFU.rdata := io.mem_rd.rdata
    io.rd_MSU.rdata := io.mem_rd.rdata
    // --------------------- write arbiter ------------------------ 
    io.sel_wt_IFU   := 0.B
    io.sel_wt_MSU   := 1.B   //always choose MSU
    io.mem_wt.en    := io.wt_MSU.en
    io.mem_wt.wr    := io.wt_MSU.wr
    io.mem_wt.addr  := io.wt_MSU.addr
    io.mem_wt.wdata := io.wt_MSU.wdata
    io.mem_wt.wmask := io.wt_MSU.wmask
}