package mycpu
import chisel3._
import chisel3.util._

trait HasAXIstateConst{
    val state_w      = 4
    val s_idle       = 0x01
    //read
    val s_read_data  = 0x02
    val s_read_resp  = 0x04
    //write
    val s_write_req  = 0x02
    val s_write_data = 0x04
    val s_write_resp = 0x08
}

class Read_mem_port(w: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val en    = Input(Bool())
        val wr    = Input(Bool())
        val addr  = Input(UInt(w.W))
        val rdata = Output(UInt(w.W))
    })
    setInline("Read_mem_port",
        """module Data_mem_port(
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
        """module Data_mem_port(
        |   input           en   ,
        |   input           wr   ,
        |   input  [63 : 0] addr ,
        |   input  [63 : 0] wdata,
        |   input  [7  : 0] wmask,
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
        val r  = Decoupled(new AXI4LiteRD(w))
        val aw = Flipped(Decoupled(new AXI4LiteAW(w)))
        val w  = Flipped(Decoupled(new AXI4LiteWR(w)))
        val b  = Decoupled(new AXI4LiteWB(w))
    })
    val rstate = RegInit(s_idle.U(state_w.W))
    val wstate = RegInit(s_idle.U(state_w.W))
    rstate := Mux1H(Seq(
        /* Idle        */ rstate(0) -> Mux(io.ar.fire, s_read_data.U, s_idle.U     ),
        /* Read data   */ rstate(1) -> (s_read_resp.U),
        /* Read Resp   */ rstate(2) -> (s_idle.U),
    )) 
    wstate := Mux1H(Seq(
        /* Idle         */ wstate(0) -> Mux(io.aw.fire, s_write_req.U , s_idle.U      ),
        /* Write Requst */ wstate(1) -> Mux(io.w.fire , s_write_data.U, s_write_req.U ),
        /* Write Data   */ wstate(2) -> Mux(io.b.fire , s_write_resp.U, s_write_data.U),
        /* Write Resp   */ wstate(3) -> (s_idle.U),
    ))
    // --------------- read data
    io.ar.ready     := rstate(0) || rstate(1)
    // --------------- read resp
    val rdata_r      = RegInit(0.U(w.W))
    io.r.bits.rdata := rdata_r
    io.r.bits.rresp := 0.U(2.W)
    io.r.valid      := rstate(2)
    val my_rmem_port = Module(new Read_Mem_port(w))
    my_rmem_port.io.en   := rstate(1)
    my_rmem_port.io.wr   := 0.B
    my_rmem_port.io.addr := io.ar.bits.araddr
    when(reset){
        rdata_r := 0.U
    }.elsewhen(rstate(1) === 1.U){
        rdata_r := my_mem_port.io.rdata
    }

    // --------------- write request
    io.aw.ready     := wstate(0) || wstate(3)
    // --------------- write data
    io.w.ready      := wstate(2)
    // --------------- write resp
    io.b.valid      := wstate(3)
    io.b.bits.bresp := 0.U(2.W)   

    val my_wmem_port = Module(new Write_mem_port(w))
    my_wmem_port.io.en    := wstate(1) || wstate(2) || wstate(3) 
    my_wmem_port.io.wr    := 1.B
    my_wmem_port.io.addr  := io.aw.bits.awaddr
    my_wmem_port.io.wdata := io.w.bits.wdata
    my_wmem_port.io.wmask := io.w.bits.wstrb
}
