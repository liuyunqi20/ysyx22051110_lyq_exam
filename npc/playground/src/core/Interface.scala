package mycpu
import chisel3._

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

// ----------------- Debug Bundle -----------------
    class DebugBundle(w: Int) extends Bundle{
        val debug_pc       = Output(UInt(w.W))
        val debug_rf_we    = Output(Bool())
        val debug_rf_wnum  = Output(UInt(5.W))
        val debug_rf_wdata = Output(UInt(w.W))
    }

// ----------------- Stage Interact Bundle -----------------
    class IftoIdBundle(w: Int) extends Bundle{
        val inst = Output(UInt(32.W))
    }

    class IdtoExBundle(w: Int) extends Bundle{
        //control signals
        val alu_op    = Output(UInt(25.W))
        val src1_sel  = Output(Bool())
        val src2_sel  = Output(Bool())
        val br_type   = Output(UInt(9.W))
        val gr_we     = Output(Bool())
        val wb_sel    = Output(Bool())
        val mem_en    = Output(Bool())
        val mem_wr    = Output(Bool())
        val mem_type  = Output(UInt(7.W))
        val rv64w     = Output(Bool())
        val ex_sel   = Output(UInt(3.W))
        //data signals
        val dest      = Output(UInt(5.W))
        val pc        = Output(UInt(w.W))
        val rs1       = Output(UInt(w.W))
        val rs2       = Output(UInt(w.W))
        val imm       = Output(UInt(w.W))
        val mem_wdata = Output(UInt(w.W))
    }

    class ExtoMemBundle(w: Int) extends Bundle{
        //control signals
        val gr_we     = Output(Bool()) 
        val dest      = Output(UInt(5.W))
        val wb_sel    = Output(Bool())
        val mem_en    = Output(Bool())
        val mem_wr    = Output(Bool())
        val mem_type  = Output(UInt(7.W))
        //data signals
        val result    = Output(UInt(w.W))
        val mem_wdata = Output(UInt(w.W))
    }

    class MemtoWbBundle(w: Int) extends Bundle{
        val result = Output(UInt(w.W))
        val gr_we  = Output(Bool())
        val dest   = Output(UInt(5.W))
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