package mycpu
import chisel3._
import chisel3.util._

trait HasMEMSconst{
    val s_idle   = 0x1
    val s_wr_resp = 0x2
    val nr_state = 2
}

class Mem_stage(w: Int) extends Module with HasMEMSconst{
    val io = IO(new Bundle{
        val ex2mem       = Flipped(new ExtoMemBundle(w))
        val mem2wb       = new MemtoWbBundle(w)
        val has_intr     = Input(Bool())
        val data_mem     = new CPUMemBundle(w)
        val if2mem       = Flipped(new IFtoMemBundle(w))
    })    
    val has_trap     = io.has_intr || (io.ex2mem.exc_type.orR === 1.U)
    //val (MT_B, MT_H, MT_W, MT_BU, MT_HU, MT_WU, MT_D) = 
        //("h01".U, "h02".U, "h04".U, "h08".U, "h10".U, "h20".U, "h40".U)
    //val my_dmem_port = Module(new Data_mem_port(w))
    val maddr        = Cat(io.ex2mem.result(w-1, 3), 0.U(3.W))
    val offset       = io.ex2mem.result(2, 0)
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
        io.ex2mem.mem_type(0) -> wmask_b,
        io.ex2mem.mem_type(1) -> wmask_h,
        io.ex2mem.mem_type(2) -> wmask_w,   
        io.ex2mem.mem_type(6) -> "hff".U((w/8).W),
    ))
    /*
    my_dmem_port.io.en     := io.ex2mem.mem_en && ~has_trap
    my_dmem_port.io.wr     := io.ex2mem.mem_wr
    my_dmem_port.io.addr   := maddr
    my_dmem_port.io.wdata  := io.ex2mem.mem_wdata
    my_dmem_port.io.wmask  := wmask
    */
    // ------------------ AXI data memory State machine ------------------ 
    val ms_wait_fs = RegInit(0.B)
    val ms_mem_en = io.ex2mem.mem_en && ~has_trap && ~ms_wait_fs
    val ms_state = RegInit(s_idle.U(nr_state.W))
    ms_state := Mux1H(Seq(
        /* Idle    */ ms_state(0) -> Mux(ms_mem_en && io.data_mem.addr_ok, s_wr_resp.U, s_idle.U),
        /* WR RESP */ ms_state(1) -> Mux(io.data_mem.data_ok, s_idle.U, s_wr_resp.U),
    ))
    // ------------------------ read ------------------------
    val ms_rdata_r = RegInit(0.U(w.W))
    when(io.data_mem.data_ok === 1.U){
        ms_rdata_r := io.data_mem.rdata
    }
    //WARNNING: rd.rresp is ignored
    io.data_mem.en    := ms_mem_en && ~ms_wait_fs && ms_state(0)
    io.data_mem.wr    := io.ex2mem.mem_wr
    io.data_mem.addr  := maddr
    io.data_mem.wdata := io.ex2mem.mem_wdata
    io.data_mem.wstrb := wmask
    //WARNNING: b.bresp is ignored
    // ------------------------ MSU wait FSU ------------------------ 
    when(io.data_mem.data_ok && ~io.if2mem.fs_wait_ms){
        ms_wait_fs := ~(io.if2mem.fs_mem_ok)
    }.elsewhen(ms_wait_fs && io.if2mem.fs_mem_ok){
        ms_wait_fs := 0.B
    }
    // ------------------------ mask read data ------------------------ 
    val mrdata       = Mux(ms_wait_fs, ms_rdata_r, io.data_mem.rdata)
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
        io.ex2mem.mem_type(0) -> Cat(Fill(w - 8 , rdata_b(7)) , rdata_b(7, 0)),  //LB
        io.ex2mem.mem_type(1) -> Cat(Fill(w - 16, rdata_h(15)), rdata_h(15, 0)), //LH
        io.ex2mem.mem_type(2) -> Cat(Fill(w - 32, rdata_w(31)), rdata_w(31, 0)), //LW
        io.ex2mem.mem_type(3) -> Cat(Fill(w - 8 , 0.U(1.W))   , rdata_b(7, 0)),  //LBU
        io.ex2mem.mem_type(4) -> Cat(Fill(w - 16, 0.U(1.W))   , rdata_h(15, 0)), //LHU
        io.ex2mem.mem_type(5) -> Cat(Fill(w - 32, 0.U(1.W))   , mrdata(31, 0)),  //LWU
        io.ex2mem.mem_type(6) -> mrdata, //LD
    ))
    // ------------------------ to Wb stage ------------------------
    //control
    io.mem2wb.gr_we        := io.ex2mem.gr_we
    io.mem2wb.csr_op       := io.ex2mem.csr_op
    io.mem2wb.exc_type     := io.ex2mem.exc_type
    //data
    io.mem2wb.dest         := io.ex2mem.dest
    io.mem2wb.result       := Mux(io.ex2mem.wb_sel, rdata, io.ex2mem.result)
    io.mem2wb.csr_num      := io.ex2mem.csr_num
    io.mem2wb.rs1          := io.ex2mem.rs1
    // ------------------------ to IF stage ------------------------ 
    io.if2mem.ms_mem_ok           := (ms_mem_en === 0.U) || io.data_mem.data_ok
    io.if2mem.ms_wait_fs          := ms_wait_fs
}