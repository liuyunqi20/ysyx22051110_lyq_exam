package mycpu
import chisel3._

class SimTop(w: Int) extends Module{
    val io = IO(new Bundle{
        val core_inst_mem_in  = new MemInBundle(w)
        val core_inst_mem_out = new MemOutBundle(w)
        val core_data_mem_in  = new MemInBundle(w)
        val core_data_mem_out = new MemOutBundle(w)
        val core_debug        = new DebugBundle(w)
    });
    val my_core_top = Module(new MycpuCoreTop(w))
    io.core_inst_mem_in  <> my_core_top.io.core_inst_mem_in
    io.core_inst_mem_out <> my_core_top.io.core_inst_mem_out
    io.core_data_mem_in  <> my_core_top.io.core_data_mem_in
    io.core_data_mem_out <> my_core_top.io.core_data_mem_out
    io.core_debug        <> my_core_top.io.core_debug
}