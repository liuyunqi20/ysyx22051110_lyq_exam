package mycpu
import chisel3._
import chisel3.util._


/*
    RegFileV module contains 32 interger gernal purpose regs in RV64I. This module use Verilog
to design. Current design has only 2 read ports and 1 write port. ID stage module uses 2 read
ports and WB stage module uses the only write port.
*/
class ysyx_22051110_RegFileV(addr_w: Int, data_w: Int) extends BlackBox{
    val io = IO(new Bundle{
        val clock  = Input(Clock())
        val reset  = Input(Bool())
        val raddr1 = Input(UInt(addr_w.W))
        val raddr2 = Input(UInt(addr_w.W))
        val waddr  = Input(UInt(addr_w.W))
        val wdata  = Input(UInt(data_w.W))
        val wen    = Input(Bool())
        val rdata1 = Output(UInt(data_w.W))
        val rdata2 = Output(UInt(data_w.W))
    })
}

class ysyx_22051110_RegFile(addr_w: Int, data_w: Int, read_ports: Int) extends Module{
    val io = IO(new Bundle{
        val raddr1 = Input(UInt(addr_w.W))
        val raddr2 = Input(UInt(addr_w.W))
        val waddr  = Input(UInt(addr_w.W))
        val wdata  = Input(UInt(data_w.W))
        val wen    = Input(Bool())
        val rdata1 = Output(UInt(data_w.W))
        val rdata2 = Output(UInt(data_w.W))
    })
    val my_gpr = Module(new ysyx_22051110_RegFileV(addr_w, data_w))
    my_gpr.io.clock := clock
    my_gpr.io.reset := reset
    my_gpr.io.raddr1 := io.raddr1
    my_gpr.io.raddr2 := io.raddr2
    my_gpr.io.waddr := io.waddr
    my_gpr.io.wdata := io.wdata
    my_gpr.io.wen := io.wen
    io.rdata1 := my_gpr.io.rdata1
    io.rdata2 := my_gpr.io.rdata2
}

/*
class GprDump extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val clock = Input(Clock())
        val reset = Input(Bool())
        val rf = Input(Vec(32, UInt(64.W)))
    })
    setInline("GprDump.v",
        """module GprDump(clock, reset, rf);
            |   input clock, reset;
            |   input [64:0] rf[31:0];
            |   import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
            |   initial set_gpr_ptr(rf);
            |endmodule
        """.stripMargin
    )
}

class RegFile(addr_w: Int, data_w: Int, read_ports: Int) extends Module{
    val io = IO(new Bundle{
        val raddr1 = Input(UInt(addr_w.W))
        val raddr2 = Input(UInt(addr_w.W))
        val waddr = Input(UInt(addr_w.W))
        val wdata = Input(UInt(data_w.W))
        val wen = Input(Bool())
        val rdata1 = Output(UInt(data_w.W))
        val rdata2 = Output(UInt(data_w.W))
    })
    val regs = RegInit(VecInit(Seq.fill(32)(0.U(data_w.W))))
    when(io.wen && (io.waddr =/= 0.U)){
        regs(io.waddr) := io.wdata
    }
    val gpr_dump = Module(new GprDump)
    gpr_dump.io.clock := clock
    gpr_dump.io.reset := reset
    gpr_dump.io.rf := regs
    /*for (i <- 0 until read_ports) {
        when (io.raddr(i) === 0.U) {
            io.rdata(i) := 0.U
        } .otherwise {
            io.rdata(i) := regs(io.raddr(i))
        }
    }*/
    when (io.raddr1 === 0.U) {
            io.rdata1 := 0.U
        } .otherwise {
            io.rdata1 := regs(io.raddr1)
        }
    when (io.raddr2 === 0.U) {
            io.rdata2 := 0.U
        } .otherwise {
            io.rdata2 := regs(io.raddr2)
        }
    //regs(io.waddr) := Mux(io.wen, io.wdata, regs(io.waddr))
    /*val raddr1_eqz = io.raddr1 === "b00000".U
    val raddr2_eqz = io.raddr2 === "b00000".U
    io.rf_out.rdata1 := Mux(raddr1_eqz, 0.U, regs(io.raddr1))
    io.rf_out.rdata2 := Mux(raddr2_eqz, 0.U, regs(io.raddr2))*/
}
*/