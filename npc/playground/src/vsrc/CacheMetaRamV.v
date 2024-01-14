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
            ram_valid[63 : 0] <= 64'b0;
            ram_dirty[63 : 0] <= 64'b0;
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