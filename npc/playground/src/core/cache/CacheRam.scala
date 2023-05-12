package mycpu
import chisel3._
import chisel3.util._

class CacheDataRam extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val clock = Input(Clock())
        val reset = Input(Bool())
        val Q     = Output(UInt(128.W))
        val CEN   = Input(Bool())
        val WEN   = Input(Bool())
        val BWEN  = Input(UInt(128.W))
        val A     = Input(UInt(6.W))
        val D     = Input(UInt(128.W))
    })
     setInline("CacheDataRamV.v",
     """module CacheDataRamV(
        |   input clock       , input reset          ,
        |   input WEN         , input CEN            ,
        |   input  [5 : 0] A  , input  [127 : 0] BWEN,
        |   input  [127 : 0] D, output [127 : 0] Q    );
        |   wire cen = ~CEN;
        |   wire wen = ~WEN;
        |   wire bwen = ~BWEN;
        |   reg [127 : 0] ram[63 : 0];
        |   reg [127 : 0] rdata;
        |   always @(posedge clock) begin
        |       if(cen && wen) begin
        |           ram[A] <= (D & bwen) | (ram[A] & ~bwen);
        |       end
        |       if(cen && !wen) begin
        |           rdata <= ram[A];
        |       end
        |   end
        |   assign Q = rdata;
        |endmodule
     """.stripMargin)
}

class CacheMetaRam(nr_ways: Int, nr_lines: Int, tag_width: Int) extends Module{
    val io = IO(new Bundle{
        val clock = Input(Clock())
        val reset = Input(Bool())
        val en    = Input(Bool())
        val wr    = Input(Bool())
        val way   = Input(UInt(log2Ceil(nr_ways).W))
        val index = Input(UInt(log2Ceil(nr_lines).W))
        val out   = Output(Vec(nr_ways, new CacheMetaBundle(tag_width)))
        val in    = Input(new CacheMetaBundle(tag_width))
    })
    val cache_meta = Seq.fill(nr_ways) { Module(new CacheMetaRamV(tag_width)).io }
    val hit_array  = Wire(Vec(nr_ways, Bool()))
    for( i <- 0 until nr_ways) {
        hit_array(i)         := io.way === i.U || io.wr === 0.U
        cache_meta(i).en     := hit_array(i) && io.en
        cache_meta(i).wr     := io.wr
        cache_meta(i).wvalid := io.in.valid
        cache_meta(i).wdirty := io.in.dirty
        cache_meta(i).wtag   := io.in.tag
        io.out(i).valid      := cache_meta(i).valid
        io.out(i).dirty      := cache_meta(i).dirty
        io.out(i).tag        := cache_meta(i).tag
    }
}

class CacheMetaRamV(tag_width: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val clock  =
        val valid  = Output(Bool())
        val dirty  = Output(Bool())
        val tag    = Output(UInt(tag_width.W))
        val en     = Input(Bool())
        val wr     = Input(Bool())
        val addr   = Input(UInt(6.W))
        val wvalid = Input(Bool())
        val wdirty = Input(Bool())
        val wtag   = Input(UInt(tag_width.W))
    })
     setInline("CacheMetaRamV.v",
     """module CacheMetaRamV(
        |   input clock        , input reset , input en, input wr,
        |   input valid        , input dirty , input [22 : 0] tag,
        |   input [5 : 0] addr , input wvalid, input wdirty      ,
        |   input [22 : 0] wtag );
        |   reg [23 : 0] ram_tag[63 : 0];
        |   reg ram_valid[63 : 0];
        |   reg ram_dirty[63 : 0];
        |   reg [23 : 0] rtag; 
        |   reg rvalid, rdirty;
        |   always @(posedge clock) begin
        |       if(en && wr) begin
        |           ram_tag[addr]   <= wtag;
        |           ram_valid[addr] <= wvalid;
        |           ram_dirty[addr] <= wdirty;
        |       end
        |       if(cen && !wr) begin
        |           rtag   <= ram_tag[addr];
        |           rvalid <= ram_valid[addr];
        |           rdirty <= ram_dirty[addr];
        |       end
        |   end
        |endmodule
     """.stripMargin)
}
