package mycpu
import chisel3._
import chisel3.util._

class InstMonitor(w: Int) extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        val clock       = Input(Clock())
        val reset       = Input(Bool())
        val inst_ebreak = Input(Bool())
        val inst        = Input(UInt(w.W))
    })
    setInline("InstMonitor.v",
    """module InstMonitor(
        |   input clock,
        |   input reset,
        |   input inst_ebreak,
        |   input [63 : 0] inst
        |   );
        |   import "DPI-C" function void set_inst_ptr(input logic [63:0] a[]);
        |   initial set_inst_ptr(inst);
        |   export "DPI-C" task catch_ebreak;
        |   task catch_ebreak(output int i);
        |       i = (!reset && (inst_ebreak == 1'b1)) ? 1 : 0;
        |   endtask
        |   endmodule
    """.stripMargin)
}

class MyDecoder() extends Module{
    val INSTT_LEN  = 6
    val ALUOP_LEN  = 23
    val BRTYPE_LEN = 9
    val MT_LEN     = 7
    val SLTT_LEN   = 3
    val io = IO(new Bundle{
        val inst      = Input(UInt(32.W))
        val inst_type = Output(UInt(INSTT_LEN.W))
        val alu_op    = Output(UInt(ALUOP_LEN.W))
        val src1_sel  = Output(Bool())
        val src2_sel  = Output(Bool())
        val rf_we     = Output(Bool())
        val wb_sel    = Output(Bool())
        val br_type   = Output(UInt(BRTYPE_LEN.W))
        val mem_en    = Output(Bool())
        val mem_wr    = Output(Bool())
        val mem_type  = Output(UInt(MT_LEN.W))
        val rv64w     = Output(Bool())
        val ex_sel   = Output(UInt(SLTT_LEN.W))
    })
    //Declare control signals
        //alu_op
        val ALU_ADD  = "h01".U     ; val ALU_SUB  = "h02".U    ; val ALU_AND  = "h04".U    ;
        val ALU_OR   = "h08".U     ; val ALU_XOR  = "h10".U    ; val ALU_SLL  = "h20".U    ;
        val ALU_SRL  = "h40".U     ; val ALU_SRA  = "h80".U    ; val ALU_SRLW = "h100".U   ;
        val ALU_SRAW = "h200".U    ; val ALU_M    = "h400".U   ; val ALU_MH   = "h800".U   ;
        val ALU_MHU  = "h1000".U   ; val ALU_MHSU = "h2000".U  ; val ALU_MW   = "h4000".U  ;
        val ALU_D    = "h8000".U   ; val ALU_DU   = "h10000".U ; val ALU_DW   = "h20000".U ;
        val ALU_DUW  = "h40000".U  ; val ALU_R    = "h80000".U ; val ALU_RU   = "h100000".U;
        val ALU_RW   = "h200000".U ; val ALU_RUW  = "h400000".U;
        //inst_type
        val Rtype   = "h01".U; val Itype   = "h02".U; val Stype   = "h04".U ;
        val Btype   = "h08".U; val Utype   = "h10".U; val Jtype   = "h20".U ;
        //src1_sel
        val OP1_RS1 = 0.B    ; val OP1_PC  = 1.B    ;
        //src2_sel
        val OP2_RS2 = 0.B    ; val OP2_IMM = 1.B    ;
        //rf_we
        val REN_0   = 0.B    ; val REN_1   = 1.B    ;
        //wb_sel
        val WB_ALU  = 0.B    ; val WB_MEM  = 1.B    ;
        //br_type
        val NB      = "h01".U; val BEQ_T   = "h02".U; val BNE_T   = "h04".U ; 
        val BLT_T   = "h08".U; val BGE_T   = "h10".U; val BLTU_T  = "h20".U ;
        val BGEU_T  = "h40".U; val JAL_T   = "h80".U; val JALR_T  = "h100".U;
        //mem_en
        val MEN_0   = 0.B    ; val MEN_1   = 1.B    ;
        //mem_wr
        val M_RD    = 0.B    ; val M_WR    = 1.B    ;
        //mem_type
        val MT_B    = "h01".U; val MT_H    = "h02".U; val MT_W    = "h04".U ;
        val MT_BU   = "h08".U; val MT_HU   = "h10".U; val MT_WU   = "h20".U ;
        val MT_D    = "h40".U;
        //RV64I w
        val LEN_X   = 0.B    ; val LEN_W   = 1.B    ;
        //slt type
        val NSLT    = "h01".U; val SLT_T   = "h02".U; val SLTU_T  = "h04".U ;
    //BitPat
        val LUI   = BitPat("b???????_?????_?????_???_?????_01101_11")
        val AUIPC = BitPat("b???????_?????_?????_???_?????_00101_11")
        val JAL   = BitPat("b???????_?????_?????_???_?????_11011_11")
        val JALR  = BitPat("b???????_?????_?????_???_?????_11001_11")
        //branch
        val BEQ   = BitPat("b???????_?????_?????_000_?????_11000_11")
        val BNE   = BitPat("b???????_?????_?????_001_?????_11000_11")
        val BLT   = BitPat("b???????_?????_?????_100_?????_11000_11")
        val BGE   = BitPat("b???????_?????_?????_101_?????_11000_11")
        val BLTU  = BitPat("b???????_?????_?????_110_?????_11000_11")
        val BGEU  = BitPat("b???????_?????_?????_111_?????_11000_11")
        //load
        val LB    = BitPat("b???????_?????_?????_000_?????_00000_11")
        val LH    = BitPat("b???????_?????_?????_001_?????_00000_11")
        val LW    = BitPat("b???????_?????_?????_010_?????_00000_11")
        val LBU   = BitPat("b???????_?????_?????_100_?????_00000_11")
        val LHU   = BitPat("b???????_?????_?????_101_?????_00000_11")
        val LWU   = BitPat("b???????_?????_?????_110_?????_00000_11")
        val LD    = BitPat("b???????_?????_?????_011_?????_00000_11")
        //store
        val SB    = BitPat("b???????_?????_?????_000_?????_01000_11")
        val SH    = BitPat("b???????_?????_?????_001_?????_01000_11")
        val SW    = BitPat("b???????_?????_?????_010_?????_01000_11")
        val SD    = BitPat("b???????_?????_?????_011_?????_01000_11")
        //arith/logic Itype
        val ADDI  = BitPat("b???????_?????_?????_000_?????_00100_11")
        val SLTI  = BitPat("b???????_?????_?????_010_?????_00100_11")
        val SLTIU = BitPat("b???????_?????_?????_011_?????_00100_11")
        val XORI  = BitPat("b???????_?????_?????_100_?????_00100_11")
        val ORI   = BitPat("b???????_?????_?????_110_?????_00100_11")
        val ANDI  = BitPat("b???????_?????_?????_111_?????_00100_11")
        val SLLI  = BitPat("b000000?_?????_?????_001_?????_00100_11")
        val SRLI  = BitPat("b000000?_?????_?????_101_?????_00100_11")
        val SRAI  = BitPat("b010000?_?????_?????_101_?????_00100_11")
        val ADDIW = BitPat("b???????_?????_?????_000_?????_00110_11")
        val SLLIW = BitPat("b0000000_?????_?????_001_?????_00110_11")
        val SRLIW = BitPat("b0000000_?????_?????_101_?????_00110_11")
        val SRAIW = BitPat("b0100000_?????_?????_101_?????_00110_11")
        //arith/logic Rtype
        val ADD   = BitPat("b0000000_?????_?????_000_?????_01100_11")
        val SUB   = BitPat("b0100000_?????_?????_000_?????_01100_11")
        val SLL   = BitPat("b0000000_?????_?????_001_?????_01100_11")
        val SLT   = BitPat("b0000000_?????_?????_010_?????_01100_11")
        val SLTU  = BitPat("b0000000_?????_?????_011_?????_01100_11")
        val XOR   = BitPat("b0000000_?????_?????_100_?????_01100_11")
        val SRL   = BitPat("b0000000_?????_?????_101_?????_01100_11")
        val SRA   = BitPat("b0100000_?????_?????_101_?????_01100_11")
        val OR    = BitPat("b0000000_?????_?????_110_?????_01100_11")
        val AND   = BitPat("b0000000_?????_?????_111_?????_01100_11")
        val ADDW  = BitPat("b0000000_?????_?????_000_?????_01110_11")
        val SUBW  = BitPat("b0100000_?????_?????_000_?????_01110_11")
        val SLLW  = BitPat("b0000000_?????_?????_001_?????_01110_11")
        val SRLW  = BitPat("b0000000_?????_?????_101_?????_01110_11")
        val SRAW  = BitPat("b0100000_?????_?????_101_?????_01110_11")
        //RV32M
        val MUL   = BitPat("b0000001_?????_?????_000_?????_01100_11")
        val MULH  = BitPat("b0000001_?????_?????_001_?????_01100_11")
        val MULHSU= BitPat("b0000001_?????_?????_010_?????_01100_11")
        val MULHU = BitPat("b0000001_?????_?????_011_?????_01100_11")
        val DIV   = BitPat("b0000001_?????_?????_100_?????_01100_11")
        val DIVU  = BitPat("b0000001_?????_?????_101_?????_01100_11")
        val REM   = BitPat("b0000001_?????_?????_110_?????_01100_11")
        val REMU  = BitPat("b0000001_?????_?????_111_?????_01100_11")
        //RV64M
        val MULW  = BitPat("b0000001_?????_?????_000_?????_01110_11")
        val DIVW  = BitPat("b0000001_?????_?????_100_?????_01110_11")
        val DIVUW = BitPat("b0000001_?????_?????_101_?????_01110_11")
        val REMW  = BitPat("b0000001_?????_?????_110_?????_01110_11")
        val REMUW = BitPat("b0000001_?????_?????_111_?????_01110_11")
    //Decode
    val csignals = 
        ListLookup(io.inst,
                         List(0.U  , 0.U     , 0.B    , 0.B    , 0.B  , 0.B   ,  0.U   , 0.B  , 0.B , 0.U  , 0.B  , 0.U   ),
            Array(         /* inst |  ALUop  |  op1   |   op2  |  rf  |  wb   |  br    | mem  | mem | mem  | rv64w| slt  */
                           /* type |  sfcn   |  sel   |   sel  |  wen |  sel  |  type  | en   |  wr | type | sel  | sel  */
                LUI   -> List(Utype, ALU_ADD , 0.B    , OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                AUIPC -> List(Utype, ALU_ADD , OP1_PC , OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                JAL   -> List(Jtype, ALU_ADD , OP1_PC , OP2_IMM, REN_1, WB_ALU, JAL_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                JALR  -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_ALU, JALR_T , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                //branch
                BEQ   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BEQ_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                BNE   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BNE_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                BLT   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BLT_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                BGE   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BGE_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                BLTU  -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BLTU_T , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                BGEU  -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BGEU_T , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                //load
                LB    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_B , LEN_X, NSLT  ),
                LH    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_H , LEN_X, NSLT  ),
                LW    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_W , LEN_X, NSLT  ),
                LBU   -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_BU, LEN_X, NSLT  ),
                LHU   -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_HU, LEN_X, NSLT  ),
                LWU   -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_WU, LEN_X, NSLT  ),
                LD    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_D , LEN_X, NSLT  ),
                //store
                SB    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_B , LEN_X, NSLT  ),
                SH    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_H , LEN_X, NSLT  ),
                SW    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_W , LEN_X, NSLT  ),
                SD    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_D , LEN_X, NSLT  ),
                //arith/logic Itype
                ADDI  -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SLTI  -> List(Itype, ALU_SUB , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLT_T ),
                SLTIU -> List(Itype, ALU_SUB , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLTU_T),
                XORI  -> List(Itype, ALU_XOR , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                ORI   -> List(Itype, ALU_OR  , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                ANDI  -> List(Itype, ALU_AND , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SLLI  -> List(Itype, ALU_SLL , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SRLI  -> List(Itype, ALU_SRL , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SRAI  -> List(Itype, ALU_SRA , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                ADDIW -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                SLLIW -> List(Itype, ALU_SLL , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                SRLIW -> List(Itype, ALU_SRLW, OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                SRAIW -> List(Itype, ALU_SRAW, OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                //arith/logic Rtype
                ADD   -> List(Rtype, ALU_ADD , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SUB   -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SLL   -> List(Rtype, ALU_SLL , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SLT   -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLT_T ),
                SLTU  -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLTU_T),
                XOR   -> List(Rtype, ALU_XOR , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SRL   -> List(Rtype, ALU_SRL , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                SRA   -> List(Rtype, ALU_SRA , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                OR    -> List(Rtype, ALU_OR  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                AND   -> List(Rtype, ALU_AND , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                ADDW  -> List(Rtype, ALU_ADD , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                SUBW  -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                SLLW  -> List(Rtype, ALU_SLL , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                SRLW  -> List(Rtype, ALU_SRLW, OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                SRAW  -> List(Rtype, ALU_SRAW, OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                //"M" extension
                MUL   -> List(Rtype, ALU_M   , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                MULH  -> List(Rtype, ALU_MH  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                MULHU -> List(Rtype, ALU_MHU , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                MULHSU-> List(Rtype, ALU_MHSU, OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                MULW  -> List(Rtype, ALU_MW  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                DIV   -> List(Rtype, ALU_D   , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                DIVU  -> List(Rtype, ALU_DU  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                DIVW  -> List(Rtype, ALU_DW  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                DIVUW -> List(Rtype, ALU_DUW , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                REM   -> List(Rtype, ALU_R   , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                REMU  -> List(Rtype, ALU_RU  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  ),
                REMW  -> List(Rtype, ALU_RW  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
                REMUW -> List(Rtype, ALU_RUW , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  ),
            )
        )
    val inst_type::alu_op::src1_sel::src2_sel::rf_we::wb_sel::br_type::mem_en::mem_wr::mem_type::rv64w::ex_sel::Nil = csignals
    //To output wire
        io.inst_type := inst_type
        io.alu_op    := alu_op
        io.src1_sel  := src1_sel
        io.src2_sel  := src2_sel
        io.rf_we     := rf_we
        io.wb_sel    := wb_sel
        io.br_type   := br_type
        io.mem_en    := mem_en
        io.mem_wr    := mem_wr
        io.mem_type  := mem_type
        io.rv64w     := rv64w
        io.ex_sel   := ex_sel
}

class Id_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val pc    = Input(UInt(w.W))
        val if2id = Flipped(new IftoIdBundle(w))
        val id2ex = new IdtoExBundle(w)
        val wb2rf = Flipped(new WbtoRfBundle(w))
    })
    val inst = io.if2id.inst

    //catch ebreak
        val my_inst_monitor = Module(new InstMonitor(w))
        val inst_ebreak = (inst(6,0) === "b1110011".U) & (inst(19, 7) === 0.U) & (inst(31, 20) === 1.U)
        my_inst_monitor.io.clock       := clock
        my_inst_monitor.io.reset       := reset
        my_inst_monitor.io.inst_ebreak := inst_ebreak
        my_inst_monitor.io.inst        := inst

    //decoder 
        val my_decoder = Module(new MyDecoder())
        my_decoder.io.inst := inst
        val inst_type = my_decoder.io.inst_type
        val alu_op    = my_decoder.io.alu_op
        val src1_sel  = my_decoder.io.src1_sel
        val src2_sel  = my_decoder.io.src2_sel
        val rf_we     = my_decoder.io.rf_we 
        val wb_sel    = my_decoder.io.wb_sel
        val br_type   = my_decoder.io.br_type
        val mem_en    = my_decoder.io.mem_en
        val mem_wr    = my_decoder.io.mem_wr
        val mem_type  = my_decoder.io.mem_type
        val rv64w     = my_decoder.io.rv64w
        val ex_sel   = my_decoder.io.ex_sel

    //control unit
        //val (Rtype, Itype, Stype, Btype, Utype, Jtype) = ("h01".U, "h02".U, "h04".U, "h08".U, "h10".U, "h20".U)
        val rs2 = inst(24, 20)
        val rs1 = inst(19, 15)
        val rd  = inst(11, 7)
        val imm_I = Cat(Fill(w - 11, inst(31)), inst(30, 20))
        val imm_S = Cat(Fill(w - 11, inst(31)), inst(30, 25), inst(11, 7))
        val imm_B = Cat(Fill(w - 12, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W))
        val imm_U = Cat(Fill(w - 31, inst(31)), inst(30, 12), 0.U(12.W))
        val imm_J = Cat(Fill(w - 20, inst(31)), inst(19, 12), inst(20), inst(30, 21), 0.U(1.W))
        val imm = Mux1H(Seq(
                inst_type(0) -> 0.U(w.W), 
                inst_type(1) -> imm_I,
                inst_type(2) -> imm_S,
                inst_type(3) -> imm_B,
                inst_type(4) -> imm_U,
                inst_type(5) -> imm_J,
        ))

    //regfile
        val my_rf = Module(new RegFile(5, w, 2))
        val rf_raddr1    = Mux(inst_type(4) | inst_type(5), 0.U(5.W), rs1) //rs1 = 0 when J/U type
        val rf_raddr2    = rs2
        my_rf.io.raddr1 := rf_raddr1
        my_rf.io.raddr2 := rf_raddr2
        val rf_rdata1    = my_rf.io.rdata1
        val rf_rdata2    = my_rf.io.rdata2
        my_rf.io.wen    := io.wb2rf.rf_we
        my_rf.io.waddr  := io.wb2rf.waddr
        my_rf.io.wdata  := io.wb2rf.wdata
    
    //to EX stage
        //control signals
        io.id2ex.pc        := io.pc
        io.id2ex.alu_op    := alu_op
        io.id2ex.src1_sel  := src1_sel
        io.id2ex.src2_sel  := src2_sel
        io.id2ex.dest      := rd
        io.id2ex.br_type   := br_type
        io.id2ex.gr_we     := rf_we
        io.id2ex.wb_sel    := wb_sel
        io.id2ex.mem_en    := mem_en
        io.id2ex.mem_wr    := mem_wr
        io.id2ex.mem_type  := mem_type
        io.id2ex.rv64w     := rv64w
        io.id2ex.ex_sel   := ex_sel
        //data signals
        io.id2ex.pc        := io.pc
        io.id2ex.rs1       := rf_rdata1
        io.id2ex.rs2       := rf_rdata2
        io.id2ex.imm       := imm
        io.id2ex.mem_wdata := rf_rdata2
}