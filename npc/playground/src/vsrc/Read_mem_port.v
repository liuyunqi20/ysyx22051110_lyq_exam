module Read_mem_port(
   input           en   ,
   input           wr   ,
   input  [63 : 0] addr ,
   output [63 : 0] rdata
);
    wire [63 : 0] tmprdata;
    assign rdata = tmprdata;
    import "DPI-C" function void cpu_dmem_read(
        input bit en, input bit wr, input longint raddr, 
        output longint rdata);
    always @(*) begin
        cpu_dmem_read(en, wr, addr, rdata);
    end
endmodule