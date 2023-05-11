package mycpu
import chisel3._
import chisel3.util._

trait HasIFSConst{
    val s_idle = 0x1 
    val s_req  = 0x2 
    val s_resp = 0x4 
    val s_exc_clr = 0x8
    val s_exc_req = 0x10
    val s_exc_ret = 0x20
    val nr_state = 6
}

class If_stage(w: Int, if_id_w: Int) extends Module with HasIFSConst{
    val io = IO(new Bundle{
        val pc           = Output(UInt(w.W))
        val nextpc       = Output(UInt(w.W))
        val branch       = Flipped(new BranchBundle(w))
        val inst_mem     = new CPUMemBundle(w, w)
        val if2id        = new IftoIdBundle(w)
        val exc_br       = Flipped(new ExcBranchBundle(w))
        val if_mem       = new IfMemBundle(w)
        val fs_next_ok   = Output(Bool())
    })
    val pc           = RegInit("h7fff_fffc".U(w.W))
    val nextpc       = Mux(io.exc_br.exc_br, io.exc_br.exc_target,  
                            Mux(io.branch.br_en, io.branch.br_target, io.branch.pc_seq))
    val fs_wait_ms   =  RegInit(0.B)
    val fs_state     = RegInit(s_idle.U(nr_state.W))
    val exc_target_r = RegInit(0.U(w.W))
    fs_state      := Mux1H(Seq(
        /* s_idle */    fs_state(0) -> (s_req.U),
        /* s_req  */    fs_state(1) -> Mux(io.exc_br.exc_br, s_exc_req.U, Mux(io.inst_mem.req.fire, s_resp.U, s_req.U)),
        /* s_resp */    fs_state(2) -> Mux(io.exc_br.exc_br, Mux(io.inst_mem.ret.valid, s_exc_req.U, s_exc_clr.U), 
                                                             Mux(io.inst_mem.ret.valid, s_req.U, s_resp.U)),
        /* s_exc_clr */ fs_state(3) -> Mux(io.inst_mem.ret.valid, s_exc_req.U, s_exc_clr.U),
        /* s_exc_req */ fs_state(4) -> Mux(io.inst_mem.req.fire , s_exc_ret.U, s_exc_req.U),
        /* s_exc_ret */ fs_state(5) -> Mux(io.inst_mem.ret.valid, s_req.U    , s_exc_ret.U),
    ))
    // ---------------- read request ----------------
    io.inst_mem.req.valid         := (fs_state(1) && ~fs_wait_ms && ~io.exc_br.exc_br) || fs_state(4)
    io.inst_mem.req.bits.wr       := 0.B
    io.inst_mem.req.bits.addr     := Mux(fs_state(4) === 1.U, exc_target_r, nextpc)
    io.inst_mem.req.bits.wdata    := 0.U
    io.inst_mem.req.bits.wstrb    := 0.U
    io.inst_mem.req.bits.mthrough := 1.U //TODO: connect MemoryMappingUnit
    // ---------------- read response ---------------- 
    val inst              = RegInit(0.U(32.W))
    val rdata_buf         = RegInit(0.U(w.W))
    //IFU memory ok when exception inst fetch ok(fs_state(5)) or normal ret valid
    val fs_mem_ok         = io.inst_mem.ret.valid && ( fs_state(5) || (~io.exc_br.exc_br && fs_state(2)) )
    //Three condition for waiting between IFU and MSU
    val ms_ahead_fs       = (fs_mem_ok && ~fs_wait_ms &&  io.if_mem.ms_wait_fs)           //MSU ok before IFU
    val fs_ahead_ms       = (io.if_mem.ms_mem_ok &&  fs_wait_ms && ~io.if_mem.ms_wait_fs) //IFU ok before MSU
    val fs_same_ms        = (fs_mem_ok &&  io.if_mem.ms_mem_ok)                           //IFU MSU ok at the same time
    //when IFU and MSU both done memory access fs_next_ok pulls high enter to next instruction
    val fs_next_ok        = fs_ahead_ms || ms_ahead_fs || fs_same_ms
    //choose inst code from buffer or port when IFU is prepared to enter next instrution 
    val fs_inst_data      = Mux(fs_wait_ms, rdata_buf, io.inst_mem.ret.rdata)
    //Buffer for exception entry
    when(io.exc_br.exc_br){ exc_target_r := io.exc_be.exc_target }
    //Enter to next instruction
    when(fs_next_ok){
        pc   := nextpc
        inst := Mux(nextpc(2) === 1.U, fs_inst_data(63, 32),
                                       fs_inst_data(31, 0))
    }
    //when exception triggered, no need to wait MSU(MSU is cleared, ms_mem_ok is always 1)
    when(io.exc_br.exc_br){
        fs_wait_ms := 0.B
    }.elsewhen(fs_mem_ok && ~io.if_mem.ms_mem_ok && ~io.if_mem.ms_wait_fs){
        fs_wait_ms := 1.B
        rdata_buf  := io.inst_mem.ret.rdata
    }.elsewhen(fs_wait_ms && io.if_mem.ms_mem_ok){
        fs_wait_ms := 0.B
    }
    //pc output
    io.nextpc     := nextpc
    io.pc         := pc
    //to ID stage
    io.if2id.inst := inst
    //to Wb stage
    io.if_mem.fs_mem_ok  := io.inst_mem.ret.valid
    io.if_mem.fs_wait_ms := fs_wait_ms
    io.fs_next_ok        := fs_next_ok
}


