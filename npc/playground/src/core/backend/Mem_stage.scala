package mycpu
import chisel3._
import chisel3.util._

trait HasMEMSconst{
    val s_idle     = 0x1
    val s_resp  = 0x2
    val s_garbage = 0x4
    val nr_state = 3
}

/*
    Mem stage module is to execute data memory access for both read and write. In single cycle,
CPU request will be send at this stage and wait until return valid. In Pipeline CPU, request is
sent at EX stage module and CPU will wait return signals at this stage module.
*/
class Mem_stage(w: Int) extends Module with HasMEMSconst{
    val io = IO(new Bundle{
        val ex2mem       = Flipped(Decoupled(new ExtoMemBundle(w)))
        val mem2wb       = Decoupled(new MemtoWbBundle(w))
        val branch       = new BranchBundle(w)
        val exc_flush    = Input(Bool())
        val data_mem     = new CPUMemBundle(w, w)
        val ms_forward   = Valid(new ForwardingBundle(w))
    })    
    val ms_valid     = RegInit(0.B)
    val es_ms_r      = RegInit(0.U.asTypeOf(new ExtoMemBundle(w)))
    when(io.ex2mem.fire) {
        es_ms_r     := io.ex2mem.bits
    }

    val has_trap     = io.exc_flush
    val maddr        = Cat(es_ms_r.result(w-1, 3), 0.U(3.W))
    val offset       = es_ms_r.result(2, 0)
    // -------------- write mask -------------- 
    val wmask_b = MuxLookup(offset, 0.U(8.W), Seq(
        "b000".U -> "h01".U ,
        "b001".U -> "h02".U ,
        "b010".U -> "h04".U ,
        "b011".U -> "h08".U ,
        "b100".U -> "h10".U ,
        "b101".U -> "h20".U ,
        "b110".U -> "h40".U ,
        "b111".U -> "h80".U ,
    ))
    val wmask_h = MuxLookup(offset(2, 1), 0.U(8.W), Seq(
        "b00".U  -> "h03".U ,
        "b01".U  -> "h0c".U ,
        "b10".U  -> "h30".U ,
        "b11".U  -> "hc0".U ,
    ))
    val wmask_w = MuxLookup(offset(2), 0.U(8.W), Seq(
        "b0".U   -> "h0f".U ,
        "b1".U   -> "hf0".U ,
    ))
    val wmask = Mux1H(Seq(
        es_ms_r.mem_type(0) -> wmask_b,
        es_ms_r.mem_type(1) -> wmask_h,
        es_ms_r.mem_type(2) -> wmask_w,   
        es_ms_r.mem_type(6) -> "hff".U((w/8).W),
    ))
    val wdata = Mux1H(Seq(
        es_ms_r.mem_type(0) -> Fill(w / 8 , es_ms_r.mem_wdata(7,  0)), //b
        es_ms_r.mem_type(1) -> Fill(w / 16, es_ms_r.mem_wdata(15, 0)), //h
        es_ms_r.mem_type(2) -> Fill(w / 32, es_ms_r.mem_wdata(31, 0)), //w
        es_ms_r.mem_type(6) -> es_ms_r.mem_wdata,                      //d
    ))
    // ------------------ AXI data memory State machine ------------------ 
    val ms_state   = RegInit(s_idle.U(nr_state.W))
    val ms_wait = RegInit(0.B)
    ms_state := Mux1H(Seq(
        /* Idle       */ ms_state(0) -> Mux(has_trap, Mux(io.data_mem.req.fire , s_garbage.U, s_idle.U),
                                                      Mux(io.data_mem.req.fire , s_resp.U   , s_idle.U)),
        /* WR RESP    */ ms_state(1) -> Mux(has_trap, Mux(io.data_mem.ret.valid, s_idle.U   , s_garbage.U),
                                                      Mux(io.data_mem.ret.valid, s_idle.U   , s_resp.U)), 
        /* s_garbage */  ms_state(2) -> Mux(io.data_mem.ret.valid, s_idle.U, s_garbage.U)
    ))
    // ------------------------ mem req ------------------------
    val ms_rdata_r = RegInit(0.U(w.W))
    when(io.data_mem.ret.valid === 1.U){
        ms_rdata_r := io.data_mem.ret.rdata
    }
    val ms_mem_en  = es_ms_r.mem_en && ~has_trap && ms_valid //TODO
    io.data_mem.req.valid         := ms_mem_en && ms_state(0) && ~ms_wait
    io.data_mem.req.bits.wr       := es_ms_r.mem_wr
    io.data_mem.req.bits.addr     := maddr
    io.data_mem.req.bits.wdata    := wdata
    io.data_mem.req.bits.wstrb    := wmask
    //use memory mapping unit to decide mtype
    val mm                         = Module(new MemoryMappingUnit(w))
    mm.io.addr_in                 := io.data_mem.req.bits.addr
    io.data_mem.req.bits.mthrough := mm.io.mthrough
    //io.data_mem.req.bits.mthrough := 1.B
    val ms_mem_ok   = io.data_mem.ret.valid && ms_state(1) && ms_mem_en //TODO
    val ms_ready_go = !ms_mem_en || ms_mem_ok //TODO
    // ------------------------ MSU wait FSU ------------------------ 
    when(has_trap || (ms_wait && io.ex2mem.fire)){
        ms_wait := 0.B
    }.elsewhen(ms_mem_ok && ~io.mem2wb.ready){ //TODO
        ms_wait := 1.B
    }
    // ------------------------ mask read data ------------------------ 
    val mrdata       = Mux(ms_wait, ms_rdata_r, io.data_mem.ret.rdata)
    //mask read data
    val rdata_b = MuxLookup(offset, 0.U(8.W), Seq(
        "b000".U -> mrdata(7 , 0) ,        
        "b001".U -> mrdata(15, 8) ,        
        "b010".U -> mrdata(23, 16),        
        "b011".U -> mrdata(31, 24),        
        "b100".U -> mrdata(39, 32),        
        "b101".U -> mrdata(47, 40),        
        "b110".U -> mrdata(55, 48),        
        "b111".U -> mrdata(63, 56),        
    ))
    val rdata_h = MuxLookup(offset, 0.U(16.W), Seq(
        "b000".U -> mrdata(15, 0) ,
        "b010".U -> mrdata(31, 16),
        "b100".U -> mrdata(47, 32),
        "b110".U -> mrdata(63, 48),
    ))
    val rdata_w = Mux(offset(2) === 1.U, mrdata(63, 32), mrdata(31, 0))
    //select read data
    val rdata = Mux1H(Seq(
        es_ms_r.mem_type(0) -> Cat(Fill(w - 8 , rdata_b(7)) , rdata_b(7, 0)),  //LB
        es_ms_r.mem_type(1) -> Cat(Fill(w - 16, rdata_h(15)), rdata_h(15, 0)), //LH
        es_ms_r.mem_type(2) -> Cat(Fill(w - 32, rdata_w(31)), rdata_w(31, 0)), //LW
        es_ms_r.mem_type(3) -> Cat(Fill(w - 8 , 0.U(1.W))   , rdata_b(7, 0)),  //LBU
        es_ms_r.mem_type(4) -> Cat(Fill(w - 16, 0.U(1.W))   , rdata_h(15, 0)), //LHU
        es_ms_r.mem_type(5) -> Cat(Fill(w - 32, 0.U(1.W))   , mrdata(31, 0)),  //LWU
        es_ms_r.mem_type(6) -> mrdata, //LD
    ))
    // ------------------------ to Wb stage ------------------------
    io.mem2wb.valid             := ms_valid && ms_ready_go
    //control
    io.mem2wb.bits.gr_we        := es_ms_r.gr_we
    io.mem2wb.bits.csr_op       := es_ms_r.csr_op
    io.mem2wb.bits.exc_type     := es_ms_r.exc_type
    io.mem2wb.bits.is_ebreak    := es_ms_r.is_ebreak
    //data
    io.mem2wb.bits.pc           := es_ms_r.pc
    io.mem2wb.bits.dest         := es_ms_r.dest
    io.mem2wb.bits.result       := Mux(es_ms_r.wb_sel, rdata, es_ms_r.result)
    io.mem2wb.bits.csr_num      := es_ms_r.csr_num
    io.mem2wb.bits.rs1          := es_ms_r.rs1
    // ------------------------ branch ------------------------
    io.branch.br_en             := es_ms_r.br.br_en && io.mem2wb.fire
    io.branch.br_target         := es_ms_r.br.br_target
    // ------------------------ to EX stage ------------------------
    io.ex2mem.ready             := !ms_valid || (ms_ready_go && io.mem2wb.ready)
    when(has_trap || io.branch.br_en) {
        ms_valid := 0.B
    }.elsewhen(io.ex2mem.ready) {
        ms_valid := io.ex2mem.valid
    }
    // ------------------------ Forwarding ------------------------
    io.ms_forward.valid     := io.mem2wb.valid && ~es_ms_r.csr_op.orR
    io.ms_forward.bits.en   := ms_valid && es_ms_r.gr_we
    io.ms_forward.bits.dest := io.mem2wb.bits.dest
    io.ms_forward.bits.data := io.mem2wb.bits.result
}