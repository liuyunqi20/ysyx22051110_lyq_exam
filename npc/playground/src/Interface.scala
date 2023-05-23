package mycpu
import chisel3._
import chisel3.util._

// ----------------- CPU-core Memory Access Bundle ----------------- 

    class CPUMemReqBundle(w: Int, wdata_w: Int) extends Bundle{
        val wr        = Bits(1.W)
        val addr      = Bits(w.W)
        val wdata     = Bits(wdata_w.W)
        val wstrb     = Bits((w/8).W)
        val mthrough  = Bits(1.W)
    }

    class CPUMemRespBundle(w: Int) extends Bundle{
        val rdata = Input(UInt(w.W))
        val valid = Input(Bool())
    }

    class CPUMemBundle(w: Int, wdata_w: Int) extends Bundle{
        val req = Decoupled(new CPUMemReqBundle(w, wdata_w))
        val ret = new CPUMemRespBundle(w)
        val rlast = Input(Bool())
    }

// ----------------- Debug Bundle -----------------
    class DebugBundle(w: Int) extends Bundle{
        val debug_pc       = Output(UInt(w.W))
        val debug_rf_we    = Output(Bool())
        val debug_rf_wnum  = Output(UInt(5.W))
        val debug_rf_wdata = Output(UInt(w.W))
        val raise_intr     = Output(Bool())
    }

// ----------------- Stage Interact Bundle -----------------
    class ForwardingBundle(w: Int, is_es: Boolean) extends Bundle{
        val stage_valid = Output(Bool())
        val dest        = Output(UInt(5.W)) 
        val data        = Output(UInt(w.W))
        val is_load     = if(is_es) Bits(1.W) else None //Output(if(is_es) UInt(1.W) else UInt(0.W))
    }

    class BranchBundle(w: Int) extends Bundle{
        val br_target = Output(UInt(w.W))
        val br_en     = Output(Bool())
    }

    class IftoIdBundle(w: Int) extends Bundle{
        val inst = Output(UInt(32.W))
        val pc   = Output(UInt(w.W))
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
        val is_ebreak = Output(Bool())
        //data signals
        val dest      = Output(UInt(5.W))
        val pc        = Output(UInt(w.W))
        val rs1_addr  = Output(UInt(5.W))
        val rs2_addr  = Output(UInt(5.W))
        val rs1       = Output(UInt(w.W))
        val rs2       = Output(UInt(w.W))
        val imm       = Output(UInt(w.W))
        val mem_wdata = Output(UInt(w.W))
        val csr_num   = Output(UInt(12.W))
    }

    class ExtoMemBundle(w: Int) extends Bundle with HasDecodeConst{
        val pc        = Output(UInt(w.W))
        //control signals
        val gr_we     = Output(Bool()) 
        val dest      = Output(UInt(5.W))
        val wb_sel    = Output(Bool())
        val mem_en    = Output(Bool())
        val mem_wr    = Output(Bool())
        val mem_type  = Output(UInt(MT_LEN.W))
        val csr_op    = Output(UInt(CSRT_LEN.W))
        val exc_type  = Output(UInt(EXCT_LEN.W))
        val is_ebreak = Output(Bool())
        //data signals
        val result    = Output(UInt(w.W))
        val mem_wdata = Output(UInt(w.W))
        val csr_num   = Output(UInt(12.W))
        val rs1       = Output(UInt(w.W))
        val br        = new BranchBundle(w)
    }

    class MemtoWbBundle(w: Int) extends Bundle with HasDecodeConst{
        val pc        = Output(UInt(w.W))
        //control signals
        val gr_we     = Output(Bool())
        val csr_op    = Output(UInt(CSRT_LEN.W))
        val exc_type  = Output(UInt(EXCT_LEN.W))
        val is_ebreak = Output(Bool())
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

    class ExcBranchBundle(w: Int) extends Bundle{
        val exc_br     = Output(Bool())
        val exc_target = Output(UInt(w.W))
    }

// ----------------- AXI Memory Access Bundle -----------------
    class AXI4LiteAR(w: Int) extends Bundle{
        //val arvalid = Output(Bool())
        //val arready = Input(Bool())
        val araddr  = Bits(w.W)
        val arprot  = Bits(3.W)
        val arlen   = Bits(8.W) // Burst trans = awlen + 1 (1 ~ 256)
        val arsize  = Bits(3.W) // Bytes = 2 ^ awsize
        val arburst = Bits(2.W) // b01 = INCR, b10 = WRAP
    }

    class AXI4LiteRD(w: Int) extends Bundle{
        //val rvalid = Input(Bool())
        //val rready = Output(Bool())
        val rdata  = Bits(w.W)
        val rresp  = Bits(2.W)
        val rlast  = Bits(1.W)
    }

    class AXI4LiteAW(w: Int) extends Bundle{
        //val awvalid = Output(Bool())
        //val awready = Input(Bool())
        val awaddr  = Bits(w.W)
        val awprot  = Bits(3.W)
        val awlen   = Bits(8.W) // Burst trans = awlen + 1 (1 ~ 256)
        val awsize  = Bits(3.W) // Bytes Per Clock = 2 ^ awsize
        val awburst = Bits(2.W) // b01 = INCR, b10 = WRAP
    }

    class AXI4LiteWR(w: Int) extends Bundle{
        //val wvalid = Output(Bool())
        //val wready = Input(Bool())
        val wdata  = Bits(w.W)
        val wstrb  = Bits( (w/8).W )
        val wlast  = Bits(1.W)
    }

    class AXI4LiteWB(w: Int) extends Bundle{
        //val bvalid = Input(Bool())
        //val bready = Output(Bool())
        val bresp  = Bits(2.W)
    }

    class AXI4LiteBundle(w: Int) extends Bundle{
        val ar = Decoupled(new AXI4LiteAR(w))
        val rd = Flipped(Decoupled(new AXI4LiteRD(w)))
        val aw = Decoupled(new AXI4LiteAW(w))
        val wt = Decoupled(new AXI4LiteWR(w))
        val b  = Flipped(Decoupled(new AXI4LiteWB(w)))
    }

    class DPIReadMemBundle(w: Int) extends Bundle{
        val en    = Output(Bool())
        val wr    = Output(Bool())
        val addr  = Output(UInt(w.W))
        val rdata = Input(UInt(w.W))
    }

    class DPIWriteMemBundle(w: Int) extends Bundle{
        val en    = Output(Bool())
        val wr    = Output(Bool())
        val addr  = Output(UInt(w.W))
        val wdata = Output(UInt(w.W))
        val wmask = Output(UInt((w/8).W))
    }

    class IfMemBundle(w: Int) extends Bundle{
        //inst data is arriving in this cycle
        val fs_mem_ok    = Output(Bool())
        //inst data already arrived and wait for MSU to finish
        val fs_wait_ms   = Output(Bool())
        //data mem access is done in this cycle
        val ms_mem_ok    = Input(Bool())
        //MSU is done and wait for IFU to finish
        val ms_wait_fs   = Input(Bool())
        //
    }

// ----------------- Cache Bundle -----------------

    class CacheLineBundle(w: Int, tag_width: Int, block_word_n: Int) extends Bundle{
        val valid = Bits(1.W)
        val dirty = Bits(1.W)
        val tag   = Bits(tag_width.W)
        val data  = Vec(block_word_n, Bits(w.W))
    }

    class CacheMetaBundle(tag_width: Int) extends Bundle{
        val valid = Bits(1.W)
        val dirty = Bits(1.W)
        val tag   = Bits(tag_width.W)
    }

    class CacheStage1to2Bundle(config: CacheConfig) extends Bundle{
        //write
        val wr       = Bits(1.W)
        val wdata    = Bits(config.w.W)
        val wstrb    = Bits((config.w / 8).W)
        val mthrough = Bits(1.W)
        //addr
        val tag      = Bits(config.tag_width.W)
        val index    = Bits(config.index_width.W)
        val offset   = Bits(config.offset_width.W)
    } 

    class CacheStage2to3Bundle(config: CacheConfig) extends Bundle{
        //write
        val wr           = Bits(1.W)
        val wdata        = Bits(config.w.W)
        val wstrb        = Bits((config.w / 8).W)
        val mthrough     = Bits(1.W)
        //addr
        val tag          = Bits(config.tag_width.W)
        val index        = Bits(config.index_width.W)
        val offset       = Bits(config.offset_width.W)
        //hit check / replace choose
        val hit          = Bits(1.W)
        val target_way   = Bits(config.ways_width.W)
        val target_line  = new CacheLineBundle(config.w, config.tag_width, config.block_word_n)
    }

// ----------------- Clint Bundle -----------------  
    class ClintIOBundle(w: Int) extends Bundle{
        val en         = Output(Bool())
        val wr         = Output(Bool())
        val addr       = Output(UInt(w.W))
        val wdata      = Output(UInt(w.W))
        val clint_hit  = Input(Bool())
        val ret_valid  = Input(Bool())
    }
