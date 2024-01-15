module ysyx_22051110_RegFileV(
   input          clock,
   input          reset,
   input  [4:0]  waddr,
   input  [4:0]  raddr1,
   input  [4:0]  raddr2,
   input          wen,
   input  [63:0]  wdata,
   output [63:0]  rdata1,
   output [63:0]  rdata2
);
   reg[63:0] reg_file[31:0];
   always@(posedge clock) begin
       if(wen && (waddr != 5'b0)) begin
           reg_file[waddr] <= wdata[63:0];
       end
   end
   assign rdata1[63:0] = raddr1==0? 0: reg_file[raddr1];
   assign rdata2[63:0] = raddr2==0? 0: reg_file[raddr2];
   import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
   initial set_gpr_ptr(reg_file);
endmodule
