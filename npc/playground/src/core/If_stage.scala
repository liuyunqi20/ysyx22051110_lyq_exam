package mycpu
import chisel3._
import chisel3.util._

class Inst_mem_port(w: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val clk   = Input(Clock())
        val reset = Input(Bool())
        val en    = Input(Bool())
        val wr    = Input(Bool())
        val addr  = Input(UInt(w.W))
        val rdata = Output(UInt(w.W))
    })
    setInline("Inst_mem_port",
        """module Inst_mem_port(
        |   input           clk  ,
        |   input           reset,
        |   input           en   ,
        |   input           wr   ,
        |   input  [63 : 0] addr ,
        |   output reg [63 : 0] rdata
        |   );
        |       import "DPI-C" function void cpu_dmem_read(
        |           input bit en, input bit wr, input longint raddr, 
        |           output longint rdata);
        |       always @(*) begin
        |           if(!reset)
        |               cpu_dmem_read(en, wr, addr, rdata);
        |           else 
        |               rdata = 64'b1;
        |       end
        |   endmodule
        """.stripMargin)
}

class If_stage(w: Int, if_id_w: Int) extends Module{
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
    io.pc     := pc
    val nextpc = Mux(io.exc_br.exc_br, io.exc_br.exc_target,  
                    Mux(io.branch.br_en, io.branch.br_target, io.branch.pc_seq))
    io.nextpc := nextpc

    val my_imem_port = Module(new Inst_mem_port(w))
    my_imem_port.io.clk := clock
    my_imem_port.io.reset := reset
    my_imem_port.io.en := 1.B
    my_imem_port.io.wr := 0.B
    my_imem_port.io.addr := nextpc
    val inst = RegInit("h0".U(32.W))
    inst    := Mux(nextpc(2) === 1.U, my_imem_port.io.rdata(63, 32),  
                                      my_imem_port.io.rdata(31, 0))
    pc      := nextpc

    io.inst_mem_out.en     := true.B
    io.inst_mem_out.wr     := false.B
    io.inst_mem_out.addr   := nextpc
    io.inst_mem_out.rready := false.B
    io.inst_mem_out.wready := false.B
    io.inst_mem_out.wdata  := w.U
    io.inst_mem_out.wmask  := 0.U
    //to ID stage
    io.if2id.inst := inst
}


