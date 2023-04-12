package mycpu
import chisel3._

class SimTop(w: Int) extends Module{
    val io = IO(new Bundle{
        val core_debug        = new DebugBundle(w)
    });
    val my_core_top = Module(new MycpuCoreTop(w))
    io.core_debug        <> my_core_top.io.core_debug
}