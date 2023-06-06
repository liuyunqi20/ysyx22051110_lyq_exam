module CacheDataRamV(
   input clock       , input reset          ,
   input WEN         , input CEN            ,
   input  [5 : 0] A  , input  [127 : 0] BWEN,
   input  [127 : 0] D, output [127 : 0] Q    
);
   wire cen = ~CEN;
   wire wen = ~WEN;
   wire [127 : 0] bwen = ~BWEN;
   reg  [127 : 0] ram[63 : 0];
   reg  [127 : 0] rdata;
   wire [127 : 0] wdata = (D & bwen (ram[A] & ~bwen);
   always @(posedge clock) begin
       if(cen && wen)
           ram[A] <= wdata;
       else if(cen && !wen)
           rdata <= ram[A];
   end
   assign Q = rdata;
endmodule