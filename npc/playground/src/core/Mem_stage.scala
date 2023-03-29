package mycpu
import chisel3._
import chisel3.util._

class Data_mem_port(w: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val en    = Input(Bool())
        val wr    = Input(Bool())
        val addr  = Input(UInt(w.W))
        val wdata = Input(UInt(w.W))
        val wmask = Input(UInt((w/8).W))
        val rdata = Output(UInt(w.W))
    })
    setInline("Data_mem_port",
        """module Data_mem_port(
        |   input           en   ,
        |   input           wr   ,
        |   input  [63 : 0] addr ,
        |   input  [63 : 0] wdata,
        |   input  [7  : 0] wmask,
        |   output [63 : 0] rdata
        |   );
        |       wire [63 : 0] tmprdata;
        |       assign rdata = tmprdata;
        |       import "DPI-C" function void cpu_dmem_read(
        |           input bit en, input bit wr, input longint raddr, 
        |           output longint rdata);
        |       import "DPI-C" function void cpu_dmem_write(
        |           input bit en, input bit wr, input longint waddr, 
        |           input longint wdata, input byte wmask);
        |       always @(*) begin
        |           cpu_dmem_read(en, wr, addr, rdata);
        |           cpu_dmem_write(en, wr, addr, wdata, wmask);
        |       end
        |   endmodule
        """.stripMargin)
}

class Mem_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val ex2mem       = Flipped(new ExtoMemBundle(w))
        val mem2wb       = new MemtoWbBundle(w)
        val data_mem_in  = new MemInBundle(w)
        val data_mem_out = new MemOutBundle(w)
    })    
    //val (MT_B, MT_H, MT_W, MT_BU, MT_HU, MT_WU, MT_D) = 
        //("h01".U, "h02".U, "h04".U, "h08".U, "h10".U, "h20".U, "h40".U)
    val my_dmem_port = Module(new Data_mem_port(w))
    val maddr        = Cat(io.ex2mem.result(w-1, 3), 0.U(3.W))
    val mrdata       = my_dmem_port.io.rdata
    val offset       = io.ex2mem.result(2, 0)
    // -------------- mask read data -------------- 
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
    // -------------- select read data -------------- 
    val rdata = Mux1H(Seq(
        io.ex2mem.mem_type(0) -> Cat(Fill(w - 8 , rdata_b(7)) , rdata_b(7, 0)),  //LB
        io.ex2mem.mem_type(1) -> Cat(Fill(w - 16, rdata_h(15)), rdata_h(15, 0)), //LH
        io.ex2mem.mem_type(2) -> Cat(Fill(w - 32, rdata_w(31)), rdata_w(31, 0)), //LW
        io.ex2mem.mem_type(3) -> Cat(Fill(w - 8 , 0.U(1.W))   , rdata_b(7, 0)),  //LBU
        io.ex2mem.mem_type(4) -> Cat(Fill(w - 16, 0.U(1.W))   , rdata_h(15, 0)), //LHU
        io.ex2mem.mem_type(5) -> Cat(Fill(w - 32, 0.U(1.W))   , mrdata(31, 0)),  //LWU
        io.ex2mem.mem_type(6) -> mrdata, //LD
    ))
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
    //to Data Memory
    io.data_mem_out.en     := io.ex2mem.mem_en
    io.data_mem_out.wr     := io.ex2mem.mem_wr
    io.data_mem_out.addr   := maddr
    io.data_mem_out.rready := 1.B
    io.data_mem_out.wready := 1.B
    io.data_mem_out.wdata  := io.ex2mem.mem_wdata
    io.data_mem_out.wmask  := wmask
    //to Data memory port
    my_dmem_port.io.en     := io.ex2mem.mem_en
    my_dmem_port.io.wr     := io.ex2mem.mem_wr
    my_dmem_port.io.addr   := maddr
    my_dmem_port.io.wdata  := io.ex2mem.mem_wdata
    my_dmem_port.io.wmask  := wmask
    //to Wb stage
        //control
    io.mem2wb.gr_we        := io.ex2mem.gr_we
    io.mem2wb.csr_op       := io.ex2mem.csr_op
    io.mem2wb.intr_type    := io.ex2mem.intr_type
        //data
    io.mem2wb.dest         := io.ex2mem.dest
    io.mem2wb.result       := Mux(io.ex2mem.wb_sel, rdata, io.ex2mem.result)
    io.mem2wb.csr_num      := io.ex2mem.csr_num
    io.mem2wb.rs1          := io.ex2mem.rs1
}