module ysyx_22051110_CacheMetaRamV(
    input clock        , input reset , input flush        , input en, input wr,
    output valid       , output dirty, output [22 : 0] tag,
    input [5 : 0] addr , input wvalid, input wdirty      ,
    input [22 : 0] wtag
);
    reg [22 : 0] ram_tag[63 : 0];
    reg [63 : 0] ram_valid;
    reg [63 : 0] ram_dirty;
    reg [22 : 0] rtag;
    reg rvalid, rdirty;
    always @(posedge clock) begin
        if(reset | flush) begin
            rtag   <= 23'b0;
            rvalid <= 1'b0;
            rdirty <= 1'b0;
            ram_valid[63 : 0] <= 64'b0;
            ram_dirty[63 : 0] <= 64'b0;
            ram_tag[0] <= 23'b0;
            ram_tag[1] <= 23'b0;
            ram_tag[2] <= 23'b0;
            ram_tag[3] <= 23'b0;
            ram_tag[4] <= 23'b0;
            ram_tag[5] <= 23'b0;
            ram_tag[6] <= 23'b0;
            ram_tag[7] <= 23'b0;
            ram_tag[8] <= 23'b0;
            ram_tag[9] <= 23'b0;
            ram_tag[10] <= 23'b0;
            ram_tag[11] <= 23'b0;
            ram_tag[12] <= 23'b0;
            ram_tag[13] <= 23'b0;
            ram_tag[14] <= 23'b0;
            ram_tag[15] <= 23'b0;
            ram_tag[16] <= 23'b0;
            ram_tag[17] <= 23'b0;
            ram_tag[18] <= 23'b0;
            ram_tag[19] <= 23'b0;
            ram_tag[20] <= 23'b0;
            ram_tag[21] <= 23'b0;
            ram_tag[22] <= 23'b0;
            ram_tag[23] <= 23'b0;
            ram_tag[24] <= 23'b0;
            ram_tag[25] <= 23'b0;
            ram_tag[26] <= 23'b0;
            ram_tag[27] <= 23'b0;
            ram_tag[28] <= 23'b0;
            ram_tag[29] <= 23'b0;
            ram_tag[30] <= 23'b0;
            ram_tag[31] <= 23'b0;
            ram_tag[32] <= 23'b0;
            ram_tag[33] <= 23'b0;
            ram_tag[34] <= 23'b0;
            ram_tag[35] <= 23'b0;
            ram_tag[36] <= 23'b0;
            ram_tag[37] <= 23'b0;
            ram_tag[38] <= 23'b0;
            ram_tag[39] <= 23'b0;
            ram_tag[40] <= 23'b0;
            ram_tag[41] <= 23'b0;
            ram_tag[42] <= 23'b0;
            ram_tag[43] <= 23'b0;
            ram_tag[44] <= 23'b0;
            ram_tag[45] <= 23'b0;
            ram_tag[46] <= 23'b0;
            ram_tag[47] <= 23'b0;
            ram_tag[48] <= 23'b0;
            ram_tag[49] <= 23'b0;
            ram_tag[50] <= 23'b0;
            ram_tag[51] <= 23'b0;
            ram_tag[52] <= 23'b0;
            ram_tag[53] <= 23'b0;
            ram_tag[54] <= 23'b0;
            ram_tag[55] <= 23'b0;
            ram_tag[56] <= 23'b0;
            ram_tag[57] <= 23'b0;
            ram_tag[58] <= 23'b0;
            ram_tag[59] <= 23'b0;
            ram_tag[60] <= 23'b0;
            ram_tag[61] <= 23'b0;
            ram_tag[62] <= 23'b0;
            ram_tag[63] <= 23'b0;
        end
        else if(en && wr) begin
            ram_tag[addr]   <= wtag;
            ram_valid[addr] <= wvalid;
            ram_dirty[addr] <= wdirty;
        end
        if(en && !wr) begin
            rtag   <= ram_tag[addr];
            rvalid <= ram_valid[addr];
            rdirty <= ram_dirty[addr];
        end
    end
    assign valid = rvalid;
    assign dirty = rdirty;
    assign tag   = rtag;
endmodule
