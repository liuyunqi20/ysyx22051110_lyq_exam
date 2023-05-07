package mycpu
import chisel3._

/*    
    IFU and MSU are directlt linked to I/Dcache module. AXI-Bridge module
transforms request signals from cache to AXI form. Arbiter module chooses
one master and transform AXI request into DPIC function call by using 
AXI-to-DPIC module. Memory interface from MSU also links to clint module 
in order to set timer registers.
     __________________________________________
    |                                      ____|____________      __________________________________________________
    |     _______      ________           |  _____________  |    |   _________        _____________                 |
    |    |       |    |        |          | |             | |    |  |         |      |             |                |
    |    |  IFU  |--->| Icache |--------->|-| AXI-Bridge1 |-|----|->|         |      |             |                |
    |    |_______|    |________|          | |_____________| |    |  |         |----->|             |----> pmem_read |
    |                                     |                 |    |  |         |      |             |                | 
    |       ...                           |                 |    |  | Arbiter |      | AXI-to-DPIC |                | 
    |     _______      ________   _____   |  _____________  |    |  |         |      |             |                |
    |    |       |    |        | |     |  | |             | |    |  |         |----->|             |---> pmem_write |
    |    |  MSU  |--->| Dcache |-| MMC |->|-| AXI-Bridge2 |-|----|->|         |      |             |                |
    |    |_______|    |________| |_____|  | |_____________| |    |  |_________|      |             |                |
    |                  _______      |     |_________________|    |                   |_____________|                | 
    |                 |       |     |          |                 |                                                  | 
    |   CPU-Core      | clint |<----|          |                 |                        AXI-Sram                  |
    |                 |_______|                |                 |                                                  |
    |__________________________________________|                 |__________________________________________________|

NOTE: Arbiter module arbits in read-read and write-write requests from IFU and
      MSU. pmem_read and pmem_write are designed to be used by IFU and MSU 
      seperately at the same time.
*/  
trait HasConfigConst{
    val nr_mport = 2
}

class SimTop(w: Int) extends Module with HasConfigConst{
    val io = IO(new Bundle{
        val core_debug = new DebugBundle(w)
    });
    val my_core_top = Module(new MycpuCoreTop(w, nr_mport))
    val my_axi_sram = Module(new AXI4LiteSramTop(w, nr_mport))
    for( i <- 0 until nr_mport){
        my_core_top.io.axi_sram(i) <> my_axi_sram.io.in(i)
    }
    io.core_debug <> my_core_top.io.core_debug
}