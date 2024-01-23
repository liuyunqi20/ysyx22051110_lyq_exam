package mycpu
import chisel3._
import chisel3.util._

trait HasIFSConst{
    val s_idle = 0x1
    val s_req  = 0x2
    val s_resp = 0x4
    val s_clr = 0x8
    val s_reg_req = 0x10
    val s_reg_ret = 0x20
    val nr_state = 6
}

/*
    If stage module fetches instruction for the pipeline. When exception occurs, this
module will discard result of previous memory request and repeatly request for an inst
of exception entry.
*/
class ysyx_22051110_If_stage(w: Int, if_id_w: Int) extends Module with HasIFSConst{
    val io = IO(new Bundle{
        val branch       = Flipped(new BranchBundle(w))
        val inst_mem     = new CPUMemBundle(w, w)
        val if2id        = Decoupled(new IftoIdBundle(w))
        val exc_br       = Flipped(new ExcBranchBundle(w))
    })
    val pc        = RegInit("h2fff_fffc".U(w.W))
    val nextpc    = Mux(io.exc_br.exc_br, io.exc_br.exc_target,
                            Mux(io.branch.br_en, io.branch.br_target, pc + 4.U(32.W)))
    val fs_wait_r =  RegInit(0.B)
    val fs_state  = RegInit(s_idle.U(nr_state.W))
    val nextpc_r  = RegInit(0.U(w.W))
    val mm        = Module(new ysyx_22051110_MemoryMappingUnit(w))
    fs_state     := Mux1H(Seq(
        /* s_idle */    fs_state(0) -> (s_req.U),
        /* s_req  */    fs_state(1) -> Mux(io.exc_br.exc_br || io.branch.br_en,
                                                             Mux(io.inst_mem.req.fire, s_reg_ret.U, s_reg_req.U),
                                                             Mux(io.inst_mem.req.fire, s_resp.U, s_req.U)),
        /* s_resp */    fs_state(2) -> Mux(io.exc_br.exc_br || io.branch.br_en,
                                                             Mux(io.inst_mem.ret.valid, s_reg_req.U, s_clr.U),
                                                             Mux(io.inst_mem.ret.valid, s_req.U, s_resp.U)),
        /* s_clr     */ fs_state(3) -> Mux(io.exc_br.exc_br, Mux(io.inst_mem.ret.valid, s_reg_req.U, s_clr.U),
                                                             Mux(io.inst_mem.ret.valid, s_reg_req.U, s_clr.U)),
        /* s_reg_req */ fs_state(4) -> Mux(io.exc_br.exc_br, Mux(io.inst_mem.req.fire,  s_clr.U    , s_reg_req.U),
                                                             Mux(io.inst_mem.req.fire , s_reg_ret.U, s_reg_req.U)),
        /* s_reg_ret */ fs_state(5) -> Mux(io.exc_br.exc_br, Mux(io.inst_mem.ret.valid, s_reg_req.U, s_clr.U),
                                                             Mux(io.inst_mem.ret.valid, s_req.U    , s_reg_ret.U)),
    ))
    // ---------------- read request ----------------
    io.inst_mem.req.valid         := (fs_state(1) && ~fs_wait_r && ~io.exc_br.exc_br) || fs_state(4)
    io.inst_mem.req.bits.wr       := 0.B
    io.inst_mem.req.bits.addr     := Mux(fs_state(4) === 1.U, nextpc_r, nextpc)
    io.inst_mem.req.bits.size     := 2.U
    io.inst_mem.req.bits.wdata    := 0.U
    io.inst_mem.req.bits.wstrb    := 0.U
    io.inst_mem.req.bits.fencei   := 0.B
    //use memory mapping unit to decide mtype
    mm.io.addr_in                 := io.inst_mem.req.bits.addr
    io.inst_mem.req.bits.mthrough := mm.io.mthrough
    // ---------------- read response ----------------
    val rdata_buf         = RegInit(0.U(w.W))
    //IFU memory ok when exception inst fetch ok(fs_state(5)) or normal ret valid
    val fs_mem_ok         = io.inst_mem.ret.valid &&
                                ( (~io.exc_br.exc_br && ~io.branch.br_en && fs_state(5)) ||
                                  (~io.exc_br.exc_br && ~io.branch.br_en && fs_state(2)) )
    //choose inst code from buffer or port when IFU is prepared to enter next instrution
    val fs_inst_data      = Mux(fs_wait_r, rdata_buf, io.inst_mem.ret.rdata)
    //set inst and pc
    when(io.inst_mem.req.fire) {
        pc := Mux(fs_state(4), nextpc_r, nextpc)
    }
    //Buffer for exception/branch entry
    when(io.branch.br_en | io.exc_br.exc_br) { nextpc_r := nextpc }
    //when exception triggered, no need to wait MSU(MSU is cleared, ms_mem_ok is always 1)
    when(io.exc_br.exc_br || io.branch.br_en || (fs_wait_r && io.if2id.fire)){
        fs_wait_r := 0.B
    }.elsewhen(fs_mem_ok && ~io.if2id.ready){
        fs_wait_r := 1.B
        rdata_buf  := io.inst_mem.ret.rdata
    }
    //to ID stage
    io.if2id.valid     := (fs_mem_ok || fs_wait_r) && ~io.exc_br.exc_br && ~io.branch.br_en
    io.if2id.bits.inst := Mux(pc(2) === 1.U, fs_inst_data(63,32), fs_inst_data(31,0))
    io.if2id.bits.pc   := pc
}


