package mycpu
import chisel3._
import chisel3.util._

// ----------------- Memory Bundle -----------------
    class MemInBundle(val w: Int) extends Bundle{
        val rdata  = Input(UInt(w.W))
        val rvalid = Input(UInt(w.W))
        val wvalid = Input(UInt(w.W))
    }

    class MemOutBundle(val w: Int) extends Bundle{
        val en     = Output(Bool())
        val wr     = Output(Bool())
        val addr   = Output(UInt(w.W))
        val rready = Output(Bool())
        val wready = Output(Bool())
        val wdata  = Output(UInt(w.W))
        val wmask  = Output(UInt((w/8).W))
    }

// ----------------- Output Bundle -----------------
    class DebugBundle(w: Int) extends Bundle{
        val debug_pc       = Output(UInt(w.W))
        val debug_nextpc   = Output(UInt(w.W))
        val debug_rf_we    = Output(Bool())
        val debug_rf_wnum  = Output(UInt(5.W))
        val debug_rf_wdata = Output(UInt(w.W))
        val raise_intr     = Output(Bool())
    }

// ----------------- Stage Interact Bundle -----------------
    class IftoIdBundle(w: Int) extends Bundle{
        val inst = Output(UInt(32.W))
    }

    class IdtoExBundle(w: Int) extends Bundle with HasDecodeConst{
        //control signals
        val alu_op    = Output(UInt(ALUOP_LEN.W))
        val src1_sel  = Output(Bool())
        val src2_sel  = Output(Bool())
        val br_type   = Output(UInt(BRTYPE_LEN.W))
        val gr_we     = Output(Bool())
        val wb_sel    = Output(Bool())
        val mem_en    = Output(Bool())
        val mem_wr    = Output(Bool())
        val mem_type  = Output(UInt(MT_LEN.W))
        val rv64w     = Output(Bool())
        val ex_sel    = Output(UInt(SLTT_LEN.W))
        val csr_op    = Output(UInt(CSRT_LEN.W))
        val exc_type  = Output(UInt(EXCT_LEN.W))
        //data signals
        val dest      = Output(UInt(5.W))
        val pc        = Output(UInt(w.W))
        val rs1       = Output(UInt(w.W))
        val rs2       = Output(UInt(w.W))
        val imm       = Output(UInt(w.W))
        val mem_wdata = Output(UInt(w.W))
        val csr_num   = Output(UInt(12.W))
    }

    class ExtoMemBundle(w: Int) extends Bundle with HasDecodeConst{
        //control signals
        val gr_we     = Output(Bool()) 
        val dest      = Output(UInt(5.W))
        val wb_sel    = Output(Bool())
        val mem_en    = Output(Bool())
        val mem_wr    = Output(Bool())
        val mem_type  = Output(UInt(MT_LEN.W))
        val csr_op    = Output(UInt(CSRT_LEN.W))
        val exc_type  = Output(UInt(EXCT_LEN.W))
        //data signals
        val result    = Output(UInt(w.W))
        val mem_wdata = Output(UInt(w.W))
        val csr_num   = Output(UInt(12.W))
        val rs1       = Output(UInt(w.W))
    }

    class MemtoWbBundle(w: Int) extends Bundle with HasDecodeConst{
        //control signals
        val gr_we     = Output(Bool())
        val csr_op    = Output(UInt(CSRT_LEN.W))
        val exc_type  = Output(UInt(EXCT_LEN.W))
        //data signals
        val dest      = Output(UInt(5.W))
        val result    = Output(UInt(w.W))
        val csr_num   = Output(UInt(12.W))
        val rs1       = Output(UInt(w.W))
    }

    class WbtoRfBundle(w: Int) extends Bundle{
        val rf_we = Output(Bool())
        val waddr = Output(UInt(5.W))
        val wdata = Output(UInt(w.W))
    }

    class BranchBundle(w: Int) extends Bundle{
        val pc_seq    = Output(UInt(w.W))
        val br_target = Output(UInt(w.W))
        val br_en     = Output(Bool())
    }

    class ExcBranchBundle(w: Int) extends Bundle{
        val exc_br     = Output(Bool())
        val exc_target = Output(UInt(w.W))
    }

// ----------------- AXI4-Lite Sram Bundle -----------------
    class AXI4LiteAR(w: Int) extends Bundle{
        //val arvalid = Output(Bool())
        //val arready = Input(Bool())
        val araddr  = Bits(w.W)
        val arprot  = Bits(3.W)
    }

    class AXI4LiteRD(w: Int) extends Bundle{
        //val rvalid = Input(Bool())
        //val rready = Output(Bool())
        val rdata  = Bits(w.W)
        val rresp  = Bits(2.W)
    }

    class AXI4LiteAW(w: Int) extends Bundle{
        //val awvalid = Output(Bool())
        //val awready = Input(Bool())
        val awaddr  = Bits(w.W)
        val awprot  = Bits(3.W)
    }

    class AXI4LiteWR(w: Int) extends Bundle{
        //val wvalid = Output(Bool())
        //val wready = Input(Bool())
        val wdata  = Bits(w.W)
        val wstrb  = Bits( (w/8).W )
    }

    class AXI4LiteWB(w: Int) extends Bundle{
        //val bvalid = Input(Bool())
        //val bready = Output(Bool())
        val bresp  = Bits(2.W)
    }