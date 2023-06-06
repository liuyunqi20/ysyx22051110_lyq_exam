module InstMonitor(
    input clock,
    input reset,
    input inst_ebreak,
    input [63 : 0] inst
);
    import "DPI-C" function void set_inst_ptr(input logic [63:0] a[]);
    initial set_inst_ptr(inst);
    export "DPI-C" task catch_ebreak;
    task catch_ebreak(output int i);
        i = (!reset && (inst_ebreak == 1'b1)) ? 1 : 0;
    endtask
endmodule