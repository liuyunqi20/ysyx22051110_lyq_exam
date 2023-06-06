module Write_mem_port(
   input           en   ,
   input           wr   ,
   input  [63 : 0] addr ,
   input  [63 : 0] wdata,
   input  [7  : 0] wmask
);
    import "DPI-C" function void cpu_dmem_write(
        input bit en, input bit wr, input longint waddr, 
        input longint wdata, input byte wmask);
    always @(*) begin
        cpu_dmem_write(en, wr, addr, wdata, wmask);
    end
endmodule