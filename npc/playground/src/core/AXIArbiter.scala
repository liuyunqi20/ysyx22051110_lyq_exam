package mycpu
import chisel3._
import chisel3.util._

trait HasArbiterConst{

}

class AXIArbiter(w: Int, nr_src: Int) extends Module with HasArbiterConst{
    val io = IO(new Bundle{
        val in  = Flipped(Vec(nr_src, new AXI4LiteBundle(w)))
        val out = new AXI4LiteBundle(w)
    })
    /*
        Choose one read port and interact with AXI module.
    */
    val arbiter_rd = Module(new Arbiter(new AXI4LiteAR(w), nr_src))
    val rd_chosen  = RegInit(0.U(log2Ceil(nr_src).W))  //record which port for current issue
    when(io.out.ar.fire){
        rd_chosen := arbiter_rd.io.chosen
    }
    // --------------------------- read arbiter in --------------------------- 
    //arbiter for read request
    for( i <- 0 until nr_src){
        arbiter_rd.io.in(i).valid := io.in(i).ar.valid
        arbiter_rd.io.in(i).bits  <> io.in(i).ar.bits
        io.in(i).ar.ready         := arbiter_rd.io.in(i).ready
    }
    // --------------------------- read arbiter out --------------------------- 
    arbiter_rd.io.out.ready   := io.out.ar.ready
    io.out.ar.valid           := arbiter_rd.io.out.valid
    io.out.ar.bits            <> arbiter_rd.io.out.bits
    // --------------------------- read response --------------------------- 
    for( i <- 0 until nr_src){
        io.in(i).rd.valid := io.out.rd.valid && (rd_chosen === i.U)
        io.in(i).rd.bits  <> io.out.rd.bits
        io.out.rd.ready   := io.in(i).rd.ready
    }


    /*
        Choose one write port and interact with AXI module.
    */
    val arbiter_wt = Module(new Arbiter(new AXI4LiteAW(w), nr_src))
    val wt_chosen  = RegInit(0.U(log2Ceil(nr_src).W))  //record which port for current issue
    when(io.out.ar.fire){
        wt_chosen := arbiter_wt.io.chosen
    }
    // --------------------------- write arbiter in --------------------------- 
    //arbiter for write request
    for( i <- 0 until nr_src){
        arbiter_wt.io.in(i).valid := io.in(i).aw.valid
        arbiter_wt.io.in(i).bits  <> io.in(i).aw.bits
        io.in(i).aw.ready         := arbiter_wt.io.in(i).ready
    }
    // --------------------------- write arbiter out --------------------------- 
    arbiter_wt.io.out.ready   := io.out.aw.ready
    io.out.aw.valid           := arbiter_wt.io.out.valid
    io.out.aw.bits            <> arbiter_wt.io.out.bits
    // --------------------------- write data&response --------------------------- 
    val port_chosen        = Vec(nr_src, UInt(1.W))
    for( i <- 0 until nr_src){
        port_chosen(i)     = wt_chosen === i.U
        io.in(i).wt.ready := io.out.wt.ready && port_chosen(i)
        io.in(i).wt.bits  <> io.out.wt.bits
        io.out.wt.valid   := io.in(i).wt.valid
        io.in(i).b.valid  := io.out.b.valid && port_chosen(i)
        io.in(i).b.bits   <> io.out.b.bits
        io.out.b.ready    := io.in(i).b.ready
    }

}