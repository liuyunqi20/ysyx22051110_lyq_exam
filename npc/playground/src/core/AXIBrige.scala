package mycpu
import chisel3._
import chisel3.util._

trait HasAXIstateConst{
    val state_w      = 3
    val s_idle       = 0x01
    //read
    val s_read_resp  = 0x02
    //write
    val s_write_data = 0x02
    val s_write_resp = 0x04
}

class Read_mem_port(w: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val en    = Input(Bool())
        val wr    = Input(Bool())
        val addr  = Input(UInt(w.W))
        val rdata = Output(UInt(w.W))
    })
    setInline("Read_mem_port",
        """module Read_mem_port(
        |   input           en   ,
        |   input           wr   ,
        |   input  [63 : 0] addr ,
        |   output [63 : 0] rdata
        |   );
        |       wire [63 : 0] tmprdata;
        |       assign rdata = tmprdata;
        |       import "DPI-C" function void cpu_dmem_read(
        |           input bit en, input bit wr, input longint raddr, 
        |           output longint rdata);
        |       always @(*) begin
        |           cpu_dmem_read(en, wr, addr, rdata);
        |       end
        |   endmodule
        """.stripMargin)
}

class Write_mem_port(w: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val en    = Input(Bool())
        val wr    = Input(Bool())
        val addr  = Input(UInt(w.W))
        val wdata = Input(UInt(w.W))
        val wmask = Input(UInt((w/8).W))
    })
    setInline("Write_mem_port",
        """module Write_mem_port(
        |   input           en   ,
        |   input           wr   ,
        |   input  [63 : 0] addr ,
        |   input  [63 : 0] wdata,
        |   input  [7  : 0] wmask
        |   );
        |       import "DPI-C" function void cpu_dmem_write(
        |           input bit en, input bit wr, input longint waddr, 
        |           input longint wdata, input byte wmask);
        |       always @(*) begin
        |           cpu_dmem_write(en, wr, addr, wdata, wmask);
        |       end
        |   endmodule
        """.stripMargin)
}

class AXI4LiteSram(w: Int) extends Module with HasAXIstateConst{
    val io = IO(new Bundle{
        val ar = Flipped(Decoupled(new AXI4LiteAR(w)))
        val rd = Decoupled(new AXI4LiteRD(w))
        val aw = Flipped(Decoupled(new AXI4LiteAW(w)))
        val wt = Flipped(Decoupled(new AXI4LiteWR(w)))
        val b  = Decoupled(new AXI4LiteWB(w))
        val sram_rd     = new ReadMemBundle(w)
        val sram_rd_sel = Input(Bool())
        val sram_wt     = new WriteMemBundle(w)
        val sram_wt_sel = Input(Bool())
    })
    val rstate = RegInit(s_idle.U(state_w.W))
    val wstate = RegInit(s_idle.U(state_w.W))
    rstate := Mux1H(Seq(
        /* Idle      */ rstate(0) -> Mux(io.ar.fire, s_read_resp.U, s_idle.U),
        /* Read Resp */ rstate(1) -> Mux(io.rd.fire, s_idle.U, s_read_resp.U),
    )) 
    wstate := Mux1H(Seq(
        /* Idle       */ wstate(0) -> Mux(io.aw.fire, s_write_data.U, s_idle.U),
        /* Write Data */ wstate(1) -> Mux(io.wt.fire, s_write_resp.U, s_write_data.U),
        /* Write Resp */ wstate(2) -> Mux(io.b.fire , s_idle.U      , s_write_resp.U),
    ))
    // --------------- read req ---------------
    io.ar.ready      := rstate(0)
    io.sram_rd.en    := io.ar.valid || (rstate(1) && ~rd_done_r)
    io.sram_rd.wr    := 0.B
    io.sram_rd.addr  := io.ar.bits.araddr
    val rdata_r       = RegInit(0.U(w.W))
    val rd_done_r     = RegInit(0.U(1.W))
    when(io.sram_rd_en && io.sram_rd_sel){  //data comes back
        rdata_r   := io.sram_rd.rdata
        rd_done_r := 1.U
    }.elsewhen(io.rd.fire){  //read response
        rd_done_r := 0.U
    }
    // --------------- read resp --------------- 
    io.rd.bits.rdata := rdata_r
    io.rd.bits.rresp := 0.U(2.W)
    io.rd.valid      := rstate(1)


    // --------------- write request --------------- 
    io.aw.ready     := wstate(0)
    val waddr_r      = RegInit(0.U(w.W))
    when(io.aw.fire){
        waddr_r := io.aw.bits.awaddr
    }
    // --------------- write data --------------- 
    io.wt.ready      := wstate(1)
    val wdata_r       = RegInit(0.U(w.W))
    val wmask_r       = RegInit(0.U((w/8).W))
    when(io.wt.fire){
        wdata_r := io.wt.bits.wdata
        wmask_r := io.wt.bits.wstrb
    }
    // --------------- write resp --------------- 
    io.b.valid       := wstate(2) && io.sram_wt_sel
    io.b.bits.bresp  := 0.U(2.W)
    io.sram_wt.en    := wstate(2)
    io.sram_wt.wr    := 1.B
    io.sram_wt.addr  := waddr_r
    io.sram_wt.wdata := wdata_r
    io.sram_wt.wmask := wmask_r
}
