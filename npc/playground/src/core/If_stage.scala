package mycpu
import chisel3._
import chisel3.util._

trait HasIFSConst{
    val s_idle = 0x1
    val s_req  = 0x2
    val s_resp = 0x4
    val nr_state = 3
}

class If_stage(w: Int, if_id_w: Int) extends Module with HasIFSConst{
    val io = IO(new Bundle{
        val pc           = Output(UInt(w.W))
        val nextpc       = Output(UInt(w.W))
        val branch       = Flipped(new BranchBundle(w))
        val inst_mem     = new AXI4LiteBundle(w)
        val if2id        = new IftoIdBundle(w)
        val exc_br       = Flipped(new ExcBranchBundle(w))
        val if2mem       = new IFtoMemBundle(w)
        val fs_next_ok   = Output(Bool())
    })
    val pc         = RegInit("h7fff_fffc".U(w.W))
    val nextpc     = Mux(io.exc_br.exc_br, io.exc_br.exc_target,  
                    Mux(io.branch.br_en, io.branch.br_target, io.branch.pc_seq))
    val fs_wait_ms =  RegInit(0.B)
    val fs_state   = RegInit(s_idle.U(nr_state.W))
    fs_state      := Mux1H(Seq(
        /* s_idle */ fs_state(0) -> (s_req.U),
        /* s_req  */ fs_state(1) -> Mux(io.inst_mem.ar.fire, s_resp.U, s_req.U),
        /* s_resp */ fs_state(2) -> Mux(io.inst_mem.rd.fire, s_req.U, s_resp.U),
    ))
    // ---------------- read request ----------------
    io.inst_mem.ar.valid        := fs_state(1) && ~fs_wait_ms
    io.inst_mem.ar.bits.araddr  := nextpc
    io.inst_mem.ar.bits.arprot  := 0.U(3.W)
    // ---------------- read response ----------------
    io.inst_mem.rd.ready := fs_state(2)
    val inst              = RegInit(0.U(32.W))
    val fs_ahead_ms       = (io.inst_mem.rd.fire && ~fs_wait_ms &&  io.if2mem.ms_wait_fs) //MSU ok before IFU
    val ms_ahead_fs       = (io.if2mem.ms_mem_ok &&  fs_wait_ms && ~io.if2mem.ms_wait_fs) //IFU ok before MSU
    val fs_same_ms        = (io.inst_mem.rd.fire &&  io.if2mem.ms_mem_ok) //IFU MSU ok at the same time
    val fs_next_ok        = fs_ahead_ms || ms_ahead_fs || fs_same_ms
    when(fs_next_ok){
        pc   := nextpc
        inst := Mux(nextpc(2) === 1.U, io.inst_mem.rd.bits.rdata(63, 32),
                                  io.inst_mem.rd.bits.rdata(31, 0))
    }
    when(io.inst_mem.rd.fire === 1.U){
        fs_wait_ms := ~(io.if2mem.ms_mem_ok)
    }.elsewhen(fs_wait_ms && io.if2mem.ms_mem_ok){
        fs_wait_ms := 0.B
    }
    //sram write(ignored)
    io.inst_mem.aw.valid       := 0.B
    io.inst_mem.aw.bits.awaddr := 0.U(w.W)
    io.inst_mem.aw.bits.awprot := 0.U
    io.inst_mem.wt.valid       := 0.B
    io.inst_mem.wt.bits.wdata  := 0.U
    io.inst_mem.wt.bits.wstrb  := 0.U
    io.inst_mem.b.ready        := 0.B
    //pc output
    io.nextpc     := nextpc
    io.pc         := pc
    //to ID stage
    io.if2id.inst := inst
    //to Wb stage
    io.if2mem.fs_mem_ok  := io.inst_mem.rd.fire
    io.if2mem.fs_wait_ms := fs_wait_ms
    io.fs_next_ok        := fs_next_ok
}


