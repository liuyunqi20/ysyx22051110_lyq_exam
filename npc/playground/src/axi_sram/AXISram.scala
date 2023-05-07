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

class AXI4LiteSramDriver(w: Int, block_word_n: Int) extends Module with HasAXIstateConst{
    val wsize  = w / 8
    val wwidth = log2Ceil(wsize)
    val io = IO(new Bundle{
        val ar = Flipped(Decoupled(new AXI4LiteAR(w)))
        val rd = Decoupled(new AXI4LiteRD(w))
        val aw = Flipped(Decoupled(new AXI4LiteAW(w)))
        val wt = Flipped(Decoupled(new AXI4LiteWR(w)))
        val b  = Decoupled(new AXI4LiteWB(w))
        val sram_rd       = new DPIReadMemBundle(w)
        val sram_wt       = new DPIWriteMemBundle(w)
        /*
        NOTE: resp signals pull high when pmem_read/write is done. 
            These signals are reserved for simulating pmem access 
            latency.
                In current NPC, pmem_read/write returns very fast, 
            so resp is always set to 1.U when pmem enabled.
            (check MycpuCoreTop.scala).
        */
        val sram_rd_resp  = Input(Bool())
        val sram_wt_resp  = Input(Bool())


    })
    val rstate = RegInit(s_idle.U(state_w.W))
    val wstate = RegInit(s_idle.U(state_w.W))
    rstate := Mux1H(Seq(
        /* Idle      */ rstate(0) -> Mux(io.ar.fire, s_read_resp.U, s_idle.U),
        /* Read Resp */ rstate(1) -> Mux(io.rd.fire && io.rd.bits.rlast === 1.U, s_idle.U, s_read_resp.U),
    )) 
    wstate := Mux1H(Seq(
        /* Idle       */ wstate(0) -> Mux(io.aw.fire, s_write_data.U, s_idle.U),
        /* Write Data */ wstate(1) -> Mux(io.wt.fire && io.wt.bits.wlast === 1.U, s_write_resp.U, s_write_data.U),
        /* Write Resp */ wstate(2) -> Mux(io.b.fire , s_idle.U      , s_write_resp.U),
    ))
    /* 
            Sram read enabled when ar signals shaking hands. If read data comes immediately
        when ar shaking hands, then rdata_r stores the data and response to master after next
        posedge. If read data does not come when ar shaking hands, then rd_wait_sel will pull 
        high after next posedge to keep sram enabled until data arrives.
    */
    // --------------- read req --------------- 
    val rdata_r       = RegInit(0.U(w.W))
    val raddr_r       = RegInit(0.U(w.W))
    val rburst_len    = RegInit(0.U(8.W))
    val rd_cnt        = RegInit(0.U(8.W))
    val rd_idx_r      = RegInit(0.U(log2Ceil(block_word_n).W))
    val rd_idx        = Mux(rstate(0), io.ar.bits.araddr(log2Ceil(block_word_n) + wwidth - 1, wwidth), rd_idx_r)
    val rd_addr       = Cat(raddr_r(w-1, log2Ceil(block_word_n) + wwidth), rd_idx, 0.U(wwidth.W))
    io.ar.ready      := rstate(0)
    io.sram_rd.en    := rstate(1) || io.ar.fire
    io.sram_rd.wr    := 0.B
    io.sram_rd.addr  := rd_addr
    val rdata_arrive  = io.sram_rd.en && io.sram_rd_resp 
    //read data
    when(rdata_arrive){ rdata_r  := io.sram_rd.rdata }
    //read request info and burst index
    when(io.ar.fire) { 
        rburst_len := io.ar.bits.arlen 
        raddr_r    := io.ar.bits.araddr
        rd_idx_r   := io.rd.bits.araddr(log2Ceil(block_word_n) + wwidth, wwidth) + 1.U 
    } .elsewhen(io.rd.fire) {
        rd_idx_r   := Mux(rd_idx_r === rburst_len, 0.U, rd_idx_r + 1.U) 
    }
    //read counter
    when(rdata_arrive && io.ar.fire) { 
        rd_cnt     := 0.U 
    } .elsewhen(io.rd.fire) {
        rd_cnt     := rd_cnt + 1.U
    }
    // --------------- read resp --------------- 
    io.rd.bits.rdata := rdata_r
    io.rd.bits.rresp := 0.U(2.W)
    io.rd.bits.rlast := rd_cnt === (rburst_len + 1.U)
    io.rd.valid      := rdata_arrive
    /*
            Write address is store to register when aw shaking hands. Write data and mask 
        are stored when wt shaking hands. In b stage, sram write is enabled until write data 
        success. b_wait_ready is for avoiding to enable sram write repeatedly when write is 
        done but wait for b.ready from master. 
    */
    // --------------- write request --------------- 
    io.aw.ready     := wstate(0)
    val waddr_r      = RegInit(0.U(w.W))
    val wburst_len   = RegInit(0.U(8.W))
    val wt_cnt       = RegInit(0.U(8.W))
    val wt_idx       = RegInit(0.U(log2Ceil(block_word_n).W))
    val wt_addr      = Cat(waddr_r(w-1, log2Ceil(block_word_n) + wwidth), wt_idx, 0.U(wwidth.W))
    when(io.aw.fire) { 
        waddr_r    := io.aw.bits.awaddr 
        wburst_len := io.aw.bits.awburst 
    }
    // --------------- write data --------------- 
    io.wt.ready      := wstate(1) && io.sram_wt_resp
    // val wdata_r       = RegInit(0.U(w.W))
    // val wmask_r       = RegInit(0.U((w/8).W))
    // when(io.wt.fire){
    //     wdata_r := io.wt.bits.wdata
    //     wmask_r := io.wt.bits.wstrb
    // }
    io.sram_wt.en    := wstate(1)
    io.sram_wt.wr    := 1.B
    io.sram_wt.addr  := wt_addr
    io.sram_wt.wdata := io.wt.bits.wdata
    io.sram_wt.wmask := io.wt.bits.wstrb
    //write count
    when(io.aw.fire) { 
        wt_cnt := 0.U 
        wt_idx := 0.U
    } .elsewhen(io.wt.fire) {
        wt_cnt := wt_cnt + 1.U
        wt_idx := Mux(wt_idx === wburst_len, 0.U, wt_idx + 1.U)
    }
    // --------------- write resp --------------- 
    io.b.valid       := wstate(2)
    io.b.bits.bresp  := 0.U(2.W)
}

class AXI4LiteSramTop(w: Int, nr_mport: Int, block_word_n: Int) extends Module with HasAXIstateConst{
    val io = IO(new Bundle{
        val in  = Flipped(Vec(nr_mport, new AXI4LiteBundle(w)))
    })
    val my_arbiter    = Module(new AXIArbiter(w, nr_mport))
    val my_axi_sram_driver = Module(new AXI4LiteSramDriver(w, block_word_n))
    val my_rmem_port  = Module(new Read_mem_port(w))
    val my_wmem_port  = Module(new Write_mem_port(w))
    //Arbiter
    for( i <- 0 until nr_mport){
        my_arbiter.io.in(i) <> io.in(i)
    }
    my_axi_sram_driver.io.ar <> my_arbiter.io.out.ar
    my_axi_sram_driver.io.rd <> my_arbiter.io.out.rd
    my_axi_sram_driver.io.aw <> my_arbiter.io.out.aw
    my_axi_sram_driver.io.wt <> my_arbiter.io.out.wt
    my_axi_sram_driver.io.b  <> my_arbiter.io.out.b
    //Memory Access using DPI-C
    my_axi_sram_driver.io.sram_rd      <> my_rmem_port.io
    my_axi_sram_driver.io.sram_wt      <> my_wmem_port.io
    my_axi_sram_driver.io.sram_rd_resp := my_axi_sram_driver.io.sram_rd.en
    my_axi_sram_driver.io.sram_wt_resp := my_axi_sram_driver.io.sram_wt.en
}   
