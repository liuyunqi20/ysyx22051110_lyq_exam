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

/*
    If stage module fetches instruction for the pipeline. When exception occurs, this
module will discard result of previous memory request and repeatly request for an inst
of exception entry.
*/
class If_stage(w: Int, if_id_w: Int) extends Module with HasIFSConst{
    val io = IO(new Bundle{
        val branch       = Flipped(new BranchBundle(w))
        val inst_mem     = new CPUMemBundle(w, w)
        val if2id        = Decoupled(new IftoIdBundle(w))
        val exc_br       = Flipped(new ExcBranchBundle(w))
    })
    val pc           = RegInit("h7fff_fffc".U(w.W))
    val nextpc       = Mux(io.exc_br.exc_br, io.exc_br.exc_target,  
                            Mux(io.branch.br_en, io.branch.br_target, io.branch.pc_seq))
    val fs_wait_r   =  RegInit(0.B)
    val fs_state     = RegInit(s_idle.U(nr_state.W))
    //MSU to IFU
    val exc_target_r = RegInit(0.U(w.W))
    val mm           = Module(new MemoryMappingUnit(w))
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
    io.inst_mem.req.valid         := (fs_state(1) && ~fs_wait_r && ~io.exc_br.exc_br) || fs_state(4)
    io.inst_mem.req.bits.wr       := 0.B
    io.inst_mem.req.bits.addr     := Mux(fs_state(4) === 1.U, exc_target_r, nextpc)
    io.inst_mem.req.bits.wdata    := 0.U
    io.inst_mem.req.bits.wstrb    := 0.U
    //use memory mapping unit to decide mtype
    mm.io.addr_in                 := io.inst_mem.req.bits.addr
    io.inst_mem.req.bits.mthrough := mm.io.mthrough
    // ---------------- read response ---------------- 
    val inst              = RegInit(0.U(32.W))
    val rdata_buf         = RegInit(0.U(w.W))
    //IFU memory ok when exception inst fetch ok(fs_state(5)) or normal ret valid
    val fs_mem_ok         = io.inst_mem.ret.valid && ( fs_state(5) || (~io.exc_br.exc_br && fs_state(2)) )
    //choose inst code from buffer or port when IFU is prepared to enter next instrution
    val fs_inst_data      = Mux(fs_wait_r, rdata_buf, io.inst_mem.ret.rdata)
    val fs_inst_widx      = Mux(fs_state(5), exc_target_r(2), nextpc(2))
    //Buffer for exception entry
    when(io.exc_br.exc_br){ exc_target_r := io.exc_br.exc_target }
    //when exception triggered, no need to wait MSU(MSU is cleared, ms_mem_ok is always 1)
    when(io.exc_br.exc_br || (fs_wait_r && io.if2id.fire)){
        fs_wait_r := 0.B
    }.elsewhen(fs_mem_ok && ~io.if2id.ready){
        fs_wait_r := 1.B
    }
    //to ID stage
    io.if2id.valid     := fs_mem_ok || fs_wait_r
    io.if2id.bits.inst := Mux(fs_inst_widx === 1.U, fs_inst_data(63,32), fs_inst_data(31,0))
    io.if2id.bits.pc   := Mux(fs_state(5), exc_target_r, nextpc)
}


