package mycpu
import chisel3._
import chisel3.util._

trait HasCoreTopConst{
    val nr_mmc_port       = 1
    val Cache_tag_width   = 23
    val DCache_nr_lines   = 32
    val ICache_nr_lines   = 32
    val ICache_nr_ways    = 4
    val DCache_nr_ways    = 4
    val ICache_block_size = 16
    val DCache_block_size = 16
}

/*
    Top module for CPU core. Components of CPU core:
    - 5 Pipline stage modules
    - Icache/Dcache
    - CLINT module
    - 2 AXIBridge (for IFU and MSU)

    The memory access bus in CPU core is SimpleBus(See CPUMemBundle in Interface.scala).
*/
class ysyx_22051110(w: Int, nr_mport: Int) extends Module with HasCoreTopConst{
    val io = IO(new Bundle{
        val interrupt = Input(Bool())
        val master = new AXI4LiteSocBundle(w)
        val slave  = Flipped(new AXI4LiteSocBundle(w))
        val sram0  = new SramSocBundle(w)
        val sram1  = new SramSocBundle(w)
        val sram2  = new SramSocBundle(w)
        val sram3  = new SramSocBundle(w)
        val sram4  = new SramSocBundle(w)
        val sram5  = new SramSocBundle(w)
        val sram6  = new SramSocBundle(w)
        val sram7  = new SramSocBundle(w)
    });
    val my_if          = Module(new ysyx_22051110_If_stage(w, w))
    val my_id          = Module(new ysyx_22051110_Id_stage(w))
    val my_ex          = Module(new ysyx_22051110_Ex_stage(w))
    val my_mem         = Module(new ysyx_22051110_Mem_stage(w))
    val my_wb          = Module(new ysyx_22051110_Wb_stage(w))
    val my_csr         = Module(new ysyx_22051110_Csr(w))
    val my_axi_bridges = Seq.fill(nr_mport) { Module(new ysyx_22051110_AXIBridge(w, ICache_block_size * 8 / w)).io }
    val my_mmc         = Module(new ysyx_22051110_MemoryController(w, DCache_block_size * 8 / w))
    //ICache:
    val my_icache      = Module(new ysyx_22051110_CacheTop(w, Cache_tag_width, ICache_nr_lines,
                                            ICache_nr_ways, ICache_block_size, true))
    val my_dcache      = Module(new ysyx_22051110_CacheTop(w, Cache_tag_width, DCache_nr_lines,
                                            DCache_nr_ways, DCache_block_size, false))
    val my_clint       = Module(new ysyx_22051110_Clint(w))
    val my_arbiter    = Module(new ysyx_22051110_AXIArbiter(w, nr_mport))

    //IF stage
    my_if.io.branch        <> my_mem.io.branch
    my_if.io.exc_br        <> my_wb.io.exc_br
    //ID stage
    my_id.io.if2id         <> my_if.io.if2id
    my_id.io.wb2rf         <> my_wb.io.wb2rf
    my_id.io.exc_flush     := my_wb.io.exc_br.exc_br
    my_id.io.br_flush      := my_mem.io.branch.br_en
    my_id.io.es_forward    <> my_ex.io.es_forward
    my_id.io.ms_forward    <> my_mem.io.ms_forward
    my_id.io.ws_forward    <> my_wb.io.ws_forward
    //EX stage
    my_ex.io.id2ex         <> my_id.io.id2ex
    my_ex.io.exc_flush     := my_wb.io.exc_br.exc_br
    my_ex.io.br_flush      := my_mem.io.branch.br_en
    //MEM stage
    my_mem.io.ex2mem       <> my_ex.io.ex2mem
    my_mem.io.exc_flush    := my_wb.io.exc_br.exc_br
    //Wb stage
    my_wb.io.mem2wb        <> my_mem.io.mem2wb
    //CSR/CLINT
    my_csr.io.op           <> my_wb.io.csr_op
    my_csr.io.exc          <> my_wb.io.csr_exc
    my_csr.io.out          <> my_wb.io.csr_out
    my_csr.io.clint_intr   := my_clint.io.has_intr_t
    my_csr.io.external_intr := io.interrupt
    //Memory Access
    //icache current ignored
    my_if.io.inst_mem      <> my_icache.io.in
    my_axi_bridges(0).in   <> my_icache.io.out
    //dcache
    my_mem.io.data_mem     <> my_dcache.io.in
    my_mmc.io.in           <> my_dcache.io.out
    my_clint.io.in         <> my_mmc.io.clint_out
    my_axi_bridges(1).in   <> my_mmc.io.axi_out
    //cache flush
    my_icache.io.flush     := my_dcache.io.flush
    //AXI Arbiter
    for( i <- 0 until nr_mport){
        my_arbiter.io.in(i) <> my_axi_bridges(i).out
    }
    // AXI4Lite Slave
    io.slave.awready := 0.B
    io.slave.wready  := 0.B
    io.slave.bvalid  := 0.B
    io.slave.bresp   := 0.U
    io.slave.bid     := 0.U
    io.slave.arready := 0.B
    io.slave.rvalid  := 0.B
    io.slave.rresp   := 0.U
    io.slave.rdata   := 0.U
    io.slave.rlast   := 0.B
    io.slave.rid     := 0.U
    // AXI4Lite Master
    my_arbiter.io.out.aw.ready := io.master.awready
    io.master.awvalid := my_arbiter.io.out.aw.valid
    io.master.awid    := 0.U
    io.master.awaddr  := my_arbiter.io.out.aw.bits.awaddr(31, 0)
    io.master.awlen   := my_arbiter.io.out.aw.bits.awlen
    io.master.awsize  := my_arbiter.io.out.aw.bits.awsize
    io.master.awburst := my_arbiter.io.out.aw.bits.awburst

    my_arbiter.io.out.wt.ready := io.master.wready
    io.master.wvalid := my_arbiter.io.out.wt.valid
    io.master.wdata := my_arbiter.io.out.wt.bits.wdata
    io.master.wstrb := my_arbiter.io.out.wt.bits.wstrb
    io.master.wlast := my_arbiter.io.out.wt.bits.wlast

    io.master.bready := my_arbiter.io.out.b.ready
    my_arbiter.io.out.b.valid := io.master.bvalid
    // my_arbiter.io.out.b.bid   := io.master.bid
    my_arbiter.io.out.b.bits.bresp := io.master.bresp

    my_arbiter.io.out.ar.ready := io.master.arready
    io.master.arvalid := my_arbiter.io.out.ar.valid
    io.master.arid    := 0.U
    io.master.araddr  := my_arbiter.io.out.ar.bits.araddr(31, 0)
    io.master.arlen   := my_arbiter.io.out.ar.bits.arlen
    io.master.arsize  := my_arbiter.io.out.ar.bits.arsize
    io.master.arburst := my_arbiter.io.out.ar.bits.arburst

    io.master.rready := my_arbiter.io.out.rd.ready
    my_arbiter.io.out.rd.valid := io.master.rvalid
    // my_arbiter.io.out.rd.rid   := io.master.rid
    my_arbiter.io.out.rd.bits.rresp := io.master.rresp
    my_arbiter.io.out.rd.bits.rdata := io.master.rdata
    my_arbiter.io.out.rd.bits.rlast := io.master.rlast

    // Cache Sram
    io.sram0.addr  := my_icache.io.cache_data(0).addr
    io.sram0.cen   := my_icache.io.cache_data(0).cen
    io.sram0.wen   := my_icache.io.cache_data(0).wen
    io.sram0.wdata := my_icache.io.cache_data(0).wdata
    io.sram0.wmask := my_icache.io.cache_data(0).wmask
    my_icache.io.cache_data(0).rdata := io.sram0.rdata

    io.sram1.addr  := my_icache.io.cache_data(1).addr
    io.sram1.cen   := my_icache.io.cache_data(1).cen
    io.sram1.wen   := my_icache.io.cache_data(1).wen
    io.sram1.wdata := my_icache.io.cache_data(1).wdata
    io.sram1.wmask := my_icache.io.cache_data(1).wmask
    my_icache.io.cache_data(1).rdata := io.sram1.rdata

    io.sram2.addr  := my_icache.io.cache_data(2).addr
    io.sram2.cen   := my_icache.io.cache_data(2).cen
    io.sram2.wen   := my_icache.io.cache_data(2).wen
    io.sram2.wdata := my_icache.io.cache_data(2).wdata
    io.sram2.wmask := my_icache.io.cache_data(2).wmask
    my_icache.io.cache_data(2).rdata := io.sram2.rdata

    io.sram3.addr  := my_icache.io.cache_data(3).addr
    io.sram3.cen   := my_icache.io.cache_data(3).cen
    io.sram3.wen   := my_icache.io.cache_data(3).wen
    io.sram3.wdata := my_icache.io.cache_data(3).wdata
    io.sram3.wmask := my_icache.io.cache_data(3).wmask
    my_icache.io.cache_data(3).rdata := io.sram3.rdata

    io.sram4.addr  := my_dcache.io.cache_data(0).addr
    io.sram4.cen   := my_dcache.io.cache_data(0).cen
    io.sram4.wen   := my_dcache.io.cache_data(0).wen
    io.sram4.wdata := my_dcache.io.cache_data(0).wdata
    io.sram4.wmask := my_dcache.io.cache_data(0).wmask
    my_dcache.io.cache_data(0).rdata := io.sram4.rdata

    io.sram5.addr  := my_dcache.io.cache_data(1).addr
    io.sram5.cen   := my_dcache.io.cache_data(1).cen
    io.sram5.wen   := my_dcache.io.cache_data(1).wen
    io.sram5.wdata := my_dcache.io.cache_data(1).wdata
    io.sram5.wmask := my_dcache.io.cache_data(1).wmask
    my_dcache.io.cache_data(1).rdata := io.sram5.rdata

    io.sram6.addr  := my_dcache.io.cache_data(2).addr
    io.sram6.cen   := my_dcache.io.cache_data(2).cen
    io.sram6.wen   := my_dcache.io.cache_data(2).wen
    io.sram6.wdata := my_dcache.io.cache_data(2).wdata
    io.sram6.wmask := my_dcache.io.cache_data(2).wmask
    my_dcache.io.cache_data(2).rdata := io.sram6.rdata

    io.sram7.addr  := my_dcache.io.cache_data(3).addr
    io.sram7.cen   := my_dcache.io.cache_data(3).cen
    io.sram7.wen   := my_dcache.io.cache_data(3).wen
    io.sram7.wdata := my_dcache.io.cache_data(3).wdata
    io.sram7.wmask := my_dcache.io.cache_data(3).wmask
    my_dcache.io.cache_data(3).rdata := io.sram7.rdata
}