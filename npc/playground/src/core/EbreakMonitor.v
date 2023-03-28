module EbreakMonitor(
    input clock,
    input reset,
    input inst_ebreak
);
    wire cat_ebreak;
    assign cat_ebreak = !reset && inst_ebreak;
    export "DPI-C" function integer catch_ebreak
    function integer catch_ebreak(void);
        return cat_ebreak == 1'b1;
    endfunction
endmodule