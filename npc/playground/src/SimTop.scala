package mycpu
import chisel3._

/*
    IFU and MSU are directlt linked to I/Dcache module. AXI-Bridge module
transforms request signals from cache to AXI form. Arbiter module chooses
one master and transform AXI request into DPIC function call by using
AXI-to-DPIC module. Memory interface from MSU also links to clint module
in order to set timer registers.
     ____________________________________________________________________________
    |                                      _________________                     |   _______________________________
    |     _______      ________           |  _____________  |        _________   |  |   _____________               |
    |    |       |    |        |          | |             | |       |         |  |  |  |             |              |
    |    |  IFU  |--->| Icache |--------->|-| AXI-Bridge1 |-|------>|         |  |  |  |             |              |
    |    |_______|    |________|          | |_____________| |       |         |  |  |  |             |--> pmem_read |
    |                                     |                 |       |         |  |  |  |             |              |
    |       ...                           |                 |       | Arbiter |--|--|->| AXI-to-DPIC |              |
    |     _______      ________   _____   |  _____________  |       |         |  |  |  |             |              |
    |    |       |    |        | |     |  | |             | |       |         |  |  |  |             |--> pmem_write|
    |    |  MSU  |--->| Dcache |-| MMC |->|-| AXI-Bridge2 |-|------>|         |  |  |  |             |              |
    |    |_______|    |________| |_____|  | |_____________| |       |_________|  |  |  |             |              |
    |                  _______      |     |_________________|                    |  |  |_____________|              |
    |                 |       |     |                                            |  |                               |
    |   CPU-Core      | clint |<----|                                            |  |     AXI-Sram                  |
    |                 |_______|                                                  |  |_______________________________|
    |____________________________________________________________________________|

NOTE: Arbiter module arbits in read-read and write-write requests from IFU and
      MSU. pmem_read and pmem_write are designed to be used by IFU and MSU
      seperately at the same time.
*/
trait HasConfigConst{
    val nr_mport = 2
    val cache_block_word_n = 2
    val has_sram_delay = false
    val sram_rd_delay = 5
    val sram_wt_delay = 5
}

class SimTop(w: Int) extends Module with HasConfigConst{
    val io = IO(new Bundle{
        val core_debug = new DebugBundle(w)
    });
    val my_core_top = Module(new ysyx_22051110(w, nr_mport))
    val my_axi_sram = Module(new AXI4LiteSramTop(w, nr_mport, cache_block_word_n, has_sram_delay,
                                                 sram_rd_delay, sram_wt_delay))
    // my_core_top.io.ar <> my_axi_sram.io.ar
    // my_core_top.io.rd <> my_axi_sram.io.rd
    // my_core_top.io.aw <> my_axi_sram.io.aw
    // my_core_top.io.wt <> my_axi_sram.io.wt
    // my_core_top.io.b  <> my_axi_sram.io.b
    // io.core_debug <> my_core_top.io.core_debug
}