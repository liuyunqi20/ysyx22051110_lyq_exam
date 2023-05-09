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
        NOTE: only support wrap burst type. 
              arsize is always word size. 
              arprot is ignored and is always 0
    */
    // --------------- read req --------------- 
    val ar_buf        = RegInit(0.U.asTypeOf(new AXI4LiteAR(w)))
    val rdata_r       = RegInit(0.U(w.W))
    val rd_cnt        = RegInit(0.U(8.W))
    val rd_idx        = RegInit(0.U(log2Ceil(block_word_n).W))
    val rd_addr       = Cat( Mux(rstate(0), io.ar.bits.araddr(w-1, wwidth), 
                            Cat(ar_buf.araddr(w-1, log2Ceil(block_word_n) + wwidth), rd_idx)),
                             0.U(wwidth.W) )
    val rdata_ok      = RegInit(0.B)
    val rdata_arrive  = io.sram_rd.en && io.sram_rd_resp
    //ar buffer
    when(io.ar.fire) { ar_buf := io.ar.bits }
    //read data
    when(rdata_arrive) { rdata_r  := io.sram_rd.rdata }
    when(rdata_arrive) { rdata_ok := true.B }
        .elsewhen(io.rd.fire && !rdata_arrive) { rdata_ok := false.B }
    //burst count and burst index
    when(io.ar.fire) {
        rd_idx := io.ar.bits.araddr(log2Ceil(block_word_n) + wwidth - 1, wwidth)
        rd_cnt := Mux(rdata_arrive, 1.U, 0.U)
    } .elsewhen(!io.ar.fire && rdata_arrive) {
        rd_idx := Mux(rd_idx === ar_buf.arlen, 0.U, rd_idx + 1.U)
        rd_cnt := rd_cnt + 1.U
    }
    //ar response
    io.ar.ready      := rstate(0)
    // --------------- read resp --------------- 
    io.sram_rd.en    := io.ar.fire || (rstate(1) && (!rdata_ok || io.rd.fire) && io.rd.bits.rlast===0.U)
    io.sram_rd.wr    := 0.B
    io.sram_rd.addr  := rd_addr
    io.rd.bits.rdata := rdata_r
    io.rd.bits.rresp := 0.U(2.W)
    io.rd.bits.rlast := rdata_ok && (rd_cnt === (ar_buf.arlen + 1.U))
    io.rd.valid      := rdata_ok


    /*
            Write address is store to register when aw shaking hands. Write data and mask 
        are stored when wt shaking hands. In b stage, sram write is enabled until write data 
        success. b_wait_ready is for avoiding to enable sram write repeatedly when write is 
        done but wait for b.ready from master. 
    */
    // --------------- write request --------------- 
    io.aw.ready      := wstate(0)
    val aw_buf        = RegInit(0.U.asTypeOf(new AXI4LiteAW(w)))
    val wt_cnt        = RegInit(0.U(log2Ceil(block_word_n).W))
    val wt_addr       = Cat(aw_buf.awaddr(w-1, log2Ceil(block_word_n) + wwidth), wt_cnt, 0.U(wwidth.W))
    when(io.aw.fire) { aw_buf := io.aw.bits }
    // --------------- write data --------------- 
    io.sram_wt.en    := wstate(1) && io.wt.fire
    io.sram_wt.wr    := 1.B
    io.sram_wt.addr  := wt_addr
    io.sram_wt.wdata := io.wt.bits.wdata
    io.sram_wt.wmask := io.wt.bits.wstrb
    io.wt.ready      := wstate(1) && io.sram_wt_resp
    //write count
    when(io.aw.fire) { 
        wt_cnt := 0.U 
    } .elsewhen(io.wt.fire) {
        wt_cnt := wt_cnt + 1.U
    }
    // --------------- write resp --------------- 
    io.b.valid       := wstate(2)
    io.b.bits.bresp  := 0.U(2.W)
}

class Delayer(t: Int) extends Module{
    val io = IO(new Bundle{
        val in = Input(Bool())
        val out = Output(Bool())
    })
    val delaying = RegInit(0.B)
    val din = io.in && !delaying
    when(din){
        delaying := true.B
    } .elsewhen(io.out){
        delaying := false.B
    }
    val r = ShiftRegister(din, t)
    io.out := r
}

class AXI4LiteSramTop(w: Int, nr_mport: Int, block_word_n: Int, has_sram_delay: Boolean, 
                      sram_rd_delay: Int, sram_wt_delay: Int) extends Module with HasAXIstateConst
{
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

    //sram(DPI-C) response
    val rd_resp_en = if(has_sram_delay) { 
                        val rdelayer = Module(new Delayer(sram_rd_delay)) 
                        rdelayer.io.in := my_axi_sram_driver.io.sram_rd.en
                        rdelayer.io.out
                    } else { my_axi_sram_driver.io.sram_rd.en }
    val wt_resp_en = if(has_sram_delay) { 
                        val wdelayer = Module(new Delayer(sram_wt_delay)) 
                        wdelayer.io.in := my_axi_sram_driver.io.sram_wt.en
                        wdelayer.io.out
                    } else { my_axi_sram_driver.io.sram_wt.en }
    my_axi_sram_driver.io.sram_rd_resp := rd_resp_en
    my_axi_sram_driver.io.sram_wt_resp := wt_resp_en
}   
