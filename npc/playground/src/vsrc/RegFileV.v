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
        if (reset) begin
            reg_file[0] <= 64'b0;
            reg_file[1] <= 64'b0;
            reg_file[2] <= 64'b0;
            reg_file[3] <= 64'b0;
            reg_file[4] <= 64'b0;
            reg_file[5] <= 64'b0;
            reg_file[6] <= 64'b0;
            reg_file[7] <= 64'b0;
            reg_file[8] <= 64'b0;
            reg_file[9] <= 64'b0;
            reg_file[10] <= 64'b0;
            reg_file[11] <= 64'b0;
            reg_file[12] <= 64'b0;
            reg_file[13] <= 64'b0;
            reg_file[14] <= 64'b0;
            reg_file[15] <= 64'b0;
            reg_file[16] <= 64'b0;
            reg_file[17] <= 64'b0;
            reg_file[18] <= 64'b0;
            reg_file[19] <= 64'b0;
            reg_file[20] <= 64'b0;
            reg_file[21] <= 64'b0;
            reg_file[22] <= 64'b0;
            reg_file[23] <= 64'b0;
            reg_file[24] <= 64'b0;
            reg_file[25] <= 64'b0;
            reg_file[26] <= 64'b0;
            reg_file[27] <= 64'b0;
            reg_file[28] <= 64'b0;
            reg_file[29] <= 64'b0;
            reg_file[30] <= 64'b0;
            reg_file[31] <= 64'b0;
        end
        else if(wen && (waddr != 5'b0)) begin
            reg_file[waddr] <= wdata[63:0];
        end
    end
    assign rdata1[63:0] = raddr1==0? 0: reg_file[raddr1];
    assign rdata2[63:0] = raddr2==0? 0: reg_file[raddr2];
endmodule
