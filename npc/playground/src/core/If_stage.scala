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
        val inst_mem_in  = new MemInBundle(w)
        val inst_mem_out = new MemOutBundle(w)
        val if2id        = new IftoIdBundle(w)
        val exc_br       = Flipped(new ExcBranchBundle(w))
    })
    val pc     = RegInit("h7fff_fffc".U(w.W))
    val nextpc = Mux(io.exc_br.exc_br, io.exc_br.exc_target,  
                    Mux(io.branch.br_en, io.branch.br_target, io.branch.pc_seq))

    val fs_state = RegInit(0.U(nr_state.W))
    fs_state := Mux1H(Seq(
        /* s_idle */ fs_state(0) -> (s_req.U)
        /* s_req  */ fs_state(1) -> Mux(my_isram.io.ar.fire, s_resp.U, s_req.U)
        /* s_resp */ fs_state(2) -> Mux(my_isram.io.r.fire, s_req.U, s_resp.U)
    ))
    val my_isram = Module(new AXI4LiteSram(w))
    // ---------------- read request ----------------
    my_isram.io.ar.valid := fs_state(1) === 1.U
    my_isram.io.ar.araddr  := nextpc
    my_isram.io.ar.arprot  := //TODO: prot
    // ---------------- read response ----------------
    my_isram.io.r.ready    := fs_state(2) === 1.U
    val inst = Mux(nextpc(2) === 1.U, my_isram.io.r.rdata(63, 32), 
                                                  my_isram.io.r.rdata (31, 0))
    when(fs_state(2) === 1.U){
        pc := nextpc
    }

    //to SimTop
    io.inst_mem_out.en     := true.B
    io.inst_mem_out.wr     := false.B
    io.inst_mem_out.addr   := nextpc
    io.inst_mem_out.rready := false.B
    io.inst_mem_out.wready := false.B
    io.inst_mem_out.wdata  := w.U
    io.inst_mem_out.wmask  := 0.U
    io.nextpc     := nextpc
    io.pc         := pc
    //to ID stage
    io.if2id.inst := inst
}


