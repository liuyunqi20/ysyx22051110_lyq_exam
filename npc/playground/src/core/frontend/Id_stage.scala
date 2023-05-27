package mycpu
import chisel3._
import chisel3.util._

trait HasDecodeConst{
    val INSTT_LEN  = 7
    val ALUOP_LEN  = 23
    val BRTYPE_LEN = 9
    val MT_LEN     = 7
    val SLTT_LEN   = 3
    val CSRT_LEN   = 3
    val EXCT_LEN   = 2 
}

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

class MyDecoder() extends Module with HasDecodeConst{
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
        val ex_sel    = Output(UInt(SLTT_LEN.W))
        val csr_op    = Output(UInt(CSRT_LEN.W))
        val exc_type  = Output(UInt(EXCT_LEN.W))
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
        val Ntype   = "h00".U;
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
        //csr type
        val CSR_W   = "h01".U; val CSR_S   = "h02".U; val CSR_C   = "h04".U ; 
        val NCSR    = "h00".U;
        //exc type
        val EC_T    = "h01".U; val RET_T   = "h02".U; val NINT    = "h00".U ; 
    //BitPat
        val LUI    = BitPat("b???????_?????_?????_???_?????_01101_11")
        val AUIPC  = BitPat("b???????_?????_?????_???_?????_00101_11")
        val JAL    = BitPat("b???????_?????_?????_???_?????_11011_11")
        val JALR   = BitPat("b???????_?????_?????_???_?????_11001_11")
        //branch
        val BEQ    = BitPat("b???????_?????_?????_000_?????_11000_11")
        val BNE    = BitPat("b???????_?????_?????_001_?????_11000_11")
        val BLT    = BitPat("b???????_?????_?????_100_?????_11000_11")
        val BGE    = BitPat("b???????_?????_?????_101_?????_11000_11")
        val BLTU   = BitPat("b???????_?????_?????_110_?????_11000_11")
        val BGEU   = BitPat("b???????_?????_?????_111_?????_11000_11")
        //load
        val LB     = BitPat("b???????_?????_?????_000_?????_00000_11")
        val LH     = BitPat("b???????_?????_?????_001_?????_00000_11")
        val LW     = BitPat("b???????_?????_?????_010_?????_00000_11")
        val LBU    = BitPat("b???????_?????_?????_100_?????_00000_11")
        val LHU    = BitPat("b???????_?????_?????_101_?????_00000_11")
        val LWU    = BitPat("b???????_?????_?????_110_?????_00000_11")
        val LD     = BitPat("b???????_?????_?????_011_?????_00000_11")
        //store
        val SB     = BitPat("b???????_?????_?????_000_?????_01000_11")
        val SH     = BitPat("b???????_?????_?????_001_?????_01000_11")
        val SW     = BitPat("b???????_?????_?????_010_?????_01000_11")
        val SD     = BitPat("b???????_?????_?????_011_?????_01000_11")
        //arith/logic Itype
        val ADDI   = BitPat("b???????_?????_?????_000_?????_00100_11")
        val SLTI   = BitPat("b???????_?????_?????_010_?????_00100_11")
        val SLTIU  = BitPat("b???????_?????_?????_011_?????_00100_11")
        val XORI   = BitPat("b???????_?????_?????_100_?????_00100_11")
        val ORI    = BitPat("b???????_?????_?????_110_?????_00100_11")
        val ANDI   = BitPat("b???????_?????_?????_111_?????_00100_11")
        val SLLI   = BitPat("b000000?_?????_?????_001_?????_00100_11")
        val SRLI   = BitPat("b000000?_?????_?????_101_?????_00100_11")
        val SRAI   = BitPat("b010000?_?????_?????_101_?????_00100_11")
        val ADDIW  = BitPat("b???????_?????_?????_000_?????_00110_11")
        val SLLIW  = BitPat("b0000000_?????_?????_001_?????_00110_11")
        val SRLIW  = BitPat("b0000000_?????_?????_101_?????_00110_11")
        val SRAIW  = BitPat("b0100000_?????_?????_101_?????_00110_11")
        //arith/logic Rtype
        val ADD    = BitPat("b0000000_?????_?????_000_?????_01100_11")
        val SUB    = BitPat("b0100000_?????_?????_000_?????_01100_11")
        val SLL    = BitPat("b0000000_?????_?????_001_?????_01100_11")
        val SLT    = BitPat("b0000000_?????_?????_010_?????_01100_11")
        val SLTU   = BitPat("b0000000_?????_?????_011_?????_01100_11")
        val XOR    = BitPat("b0000000_?????_?????_100_?????_01100_11")
        val SRL    = BitPat("b0000000_?????_?????_101_?????_01100_11")
        val SRA    = BitPat("b0100000_?????_?????_101_?????_01100_11")
        val OR     = BitPat("b0000000_?????_?????_110_?????_01100_11")
        val AND    = BitPat("b0000000_?????_?????_111_?????_01100_11")
        val ADDW   = BitPat("b0000000_?????_?????_000_?????_01110_11")
        val SUBW   = BitPat("b0100000_?????_?????_000_?????_01110_11")
        val SLLW   = BitPat("b0000000_?????_?????_001_?????_01110_11")
        val SRLW   = BitPat("b0000000_?????_?????_101_?????_01110_11")
        val SRAW   = BitPat("b0100000_?????_?????_101_?????_01110_11")
        //RV32M
        val MUL    = BitPat("b0000001_?????_?????_000_?????_01100_11")
        val MULH   = BitPat("b0000001_?????_?????_001_?????_01100_11")
        val MULHSU = BitPat("b0000001_?????_?????_010_?????_01100_11")
        val MULHU  = BitPat("b0000001_?????_?????_011_?????_01100_11")
        val DIV    = BitPat("b0000001_?????_?????_100_?????_01100_11")
        val DIVU   = BitPat("b0000001_?????_?????_101_?????_01100_11")
        val REM    = BitPat("b0000001_?????_?????_110_?????_01100_11")
        val REMU   = BitPat("b0000001_?????_?????_111_?????_01100_11")
        //RV64M
        val MULW   = BitPat("b0000001_?????_?????_000_?????_01110_11")
        val DIVW   = BitPat("b0000001_?????_?????_100_?????_01110_11")
        val DIVUW  = BitPat("b0000001_?????_?????_101_?????_01110_11")
        val REMW   = BitPat("b0000001_?????_?????_110_?????_01110_11")
        val REMUW  = BitPat("b0000001_?????_?????_111_?????_01110_11")
        //Zicsr
        val CSRRW  = BitPat("b???????_?????_?????_001_?????_11100_11")
        val CSRRS  = BitPat("b???????_?????_?????_010_?????_11100_11")
        val CSRRC  = BitPat("b???????_?????_?????_011_?????_11100_11")
        val CSRRWI = BitPat("b???????_?????_?????_101_?????_11100_11")
        val CSRRSI = BitPat("b???????_?????_?????_110_?????_11100_11")
        val CSRRCI = BitPat("b???????_?????_?????_111_?????_11100_11")
        //exception
        val ECALL  = BitPat("b0000000_00000_00000_000_00000_11100_11")
        val MRET   = BitPat("b0011000_00010_00000_000_00000_11100_11")
    //Decode
    val csignals = 
        ListLookup(io.inst,
                         List(0.U  , 0.U     , 0.B    , 0.B    , 0.B  , 0.B   ,  0.U   , 0.B  , 0.B , 0.U  , 0.B  , 0.U   , 0.U  , 0.U),
            Array(         /* inst |  ALUop  |  op1   |   op2  |  rf  |  wb   |  br    | mem  | mem | mem  | rv64w| slt   | csr  | intr */
                           /* type |  sfcn   |  sel   |   sel  |  wen |  sel  |  type  | en   |  wr | type | sel  | sel   | type | type */
                LUI   -> List(Utype, ALU_ADD , 0.B    , OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                AUIPC -> List(Utype, ALU_ADD , OP1_PC , OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                JAL   -> List(Jtype, ALU_ADD , OP1_PC , OP2_IMM, REN_1, WB_ALU, JAL_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                JALR  -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_ALU, JALR_T , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                //branch
                BEQ   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BEQ_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                BNE   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BNE_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                BLT   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BLT_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                BGE   -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BGE_T  , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                BLTU  -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BLTU_T , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                BGEU  -> List(Btype, ALU_SUB , OP1_RS1, OP2_RS2, REN_0, 0.B   , BGEU_T , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                //load
                LB    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_B , LEN_X, NSLT  , NCSR , NINT ),
                LH    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_H , LEN_X, NSLT  , NCSR , NINT ),
                LW    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_W , LEN_X, NSLT  , NCSR , NINT ),
                LBU   -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_BU, LEN_X, NSLT  , NCSR , NINT ),
                LHU   -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_HU, LEN_X, NSLT  , NCSR , NINT ),
                LWU   -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_WU, LEN_X, NSLT  , NCSR , NINT ),
                LD    -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_MEM, NB     , MEN_1, M_RD, MT_D , LEN_X, NSLT  , NCSR , NINT ),
                //store
                SB    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_B , LEN_X, NSLT  , NCSR , NINT ),
                SH    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_H , LEN_X, NSLT  , NCSR , NINT ),
                SW    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_W , LEN_X, NSLT  , NCSR , NINT ),
                SD    -> List(Stype, ALU_ADD , OP1_RS1, OP2_IMM, REN_0, 0.B   , NB     , MEN_1, M_WR, MT_D , LEN_X, NSLT  , NCSR , NINT ),
                //arith/logic Itype
                ADDI  -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SLTI  -> List(Itype, ALU_SUB , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLT_T , NCSR , NINT ),
                SLTIU -> List(Itype, ALU_SUB , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLTU_T, NCSR , NINT ),
                XORI  -> List(Itype, ALU_XOR , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                ORI   -> List(Itype, ALU_OR  , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                ANDI  -> List(Itype, ALU_AND , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SLLI  -> List(Itype, ALU_SLL , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SRLI  -> List(Itype, ALU_SRL , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SRAI  -> List(Itype, ALU_SRA , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                ADDIW -> List(Itype, ALU_ADD , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                SLLIW -> List(Itype, ALU_SLL , OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                SRLIW -> List(Itype, ALU_SRLW, OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                SRAIW -> List(Itype, ALU_SRAW, OP1_RS1, OP2_IMM, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                //arith/logic Rtype
                ADD   -> List(Rtype, ALU_ADD , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SUB   -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SLL   -> List(Rtype, ALU_SLL , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SLT   -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLT_T , NCSR , NINT ),
                SLTU  -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, SLTU_T, NCSR , NINT ),
                XOR   -> List(Rtype, ALU_XOR , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SRL   -> List(Rtype, ALU_SRL , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                SRA   -> List(Rtype, ALU_SRA , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                OR    -> List(Rtype, ALU_OR  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                AND   -> List(Rtype, ALU_AND , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                ADDW  -> List(Rtype, ALU_ADD , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                SUBW  -> List(Rtype, ALU_SUB , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                SLLW  -> List(Rtype, ALU_SLL , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                SRLW  -> List(Rtype, ALU_SRLW, OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                SRAW  -> List(Rtype, ALU_SRAW, OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                //"M" extension
                MUL   -> List(Rtype, ALU_M   , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                MULH  -> List(Rtype, ALU_MH  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                MULHU -> List(Rtype, ALU_MHU , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                MULHSU-> List(Rtype, ALU_MHSU, OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                MULW  -> List(Rtype, ALU_MW  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                DIV   -> List(Rtype, ALU_D   , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                DIVU  -> List(Rtype, ALU_DU  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                DIVW  -> List(Rtype, ALU_DW  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                DIVUW -> List(Rtype, ALU_DUW , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                REM   -> List(Rtype, ALU_R   , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                REMU  -> List(Rtype, ALU_RU  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_X, NSLT  , NCSR , NINT ),
                REMW  -> List(Rtype, ALU_RW  , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                REMUW -> List(Rtype, ALU_RUW , OP1_RS1, OP2_RS2, REN_1, WB_ALU, NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , NINT ),
                //Zicsr
                CSRRW -> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , CSR_W, NINT ),
                CSRRS -> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , CSR_S, NINT ),
                CSRRC -> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , CSR_C, NINT ),
                CSRRWI-> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , CSR_W, NINT ),
                CSRRSI-> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , CSR_S, NINT ),
                CSRRCI-> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , CSR_C, NINT ),
                //exception
                ECALL -> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , EC_T ),
                MRET  -> List(Ntype, 0.U     , 0.U    , 0.U    , REN_1, 0.B   , NB     , MEN_0, 0.B , 0.U  , LEN_W, NSLT  , NCSR , RET_T),
            )
        )
    val inst_type::alu_op::src1_sel::src2_sel::rf_we::wb_sel::br_type::mem_en::mem_wr::mem_type::rv64w::ex_sel::csr_op::exc_type::Nil = csignals
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
        io.ex_sel    := ex_sel
        io.csr_op    := csr_op
        io.exc_type  := exc_type
}

/*
    Id module executes instruction decode and control signals generation. Decode is done by
module MyDecoder to generates control signals. EbreakMonitor module is set to monitor ebreak
instruction. When this module catches ebreak inst, a signal will be sent to simulation environment
and then end the simulation.
*/
class Id_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val if2id      = Flipped(Decoupled(new IftoIdBundle(w)))
        val id2ex      = Decoupled(new IdtoExBundle(w))
        val wb2rf      = Flipped(new WbtoRfBundle(w))
        val exc_flush  = Input(Bool())
        val br_flush   = Input(Bool())
        val es_forward = Flipped(Valid(new ForwardingBundle(w)))
        val ms_forward = Flipped(Valid(new ForwardingBundle(w)))
        val ws_forward = Flipped(Valid(new ForwardingBundle(w)))
        val ebreak     = Input(Bool())
    })
    val ds_valid    = RegInit(0.B)
    val fs_ds_r     = RegInit(0.U.asTypeOf(new IftoIdBundle(w)))
    when(io.if2id.fire) {
        fs_ds_r    := io.if2id.bits
    }
    //inst code
        val inst = fs_ds_r.inst
    // ------------------------ catch ebreak ------------------------ 
        val my_inst_monitor = Module(new InstMonitor(w))
        val inst_ebreak = (inst(6,0) === "b1110011".U) & (inst(19, 7) === 0.U) & (inst(31, 20) === 1.U)
        my_inst_monitor.io.clock       := clock
        my_inst_monitor.io.reset       := reset
        my_inst_monitor.io.inst_ebreak := io.ebreak
        my_inst_monitor.io.inst        := inst

    // ------------------------ decoder ------------------------ 
        val my_decoder = Module(new MyDecoder())
        my_decoder.io.inst := inst
        val inst_type = my_decoder.io.inst_type
    // ------------------------ control unit ------------------------ 
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

    // ------------------------ regfile ------------------------ 
        val my_rf = Module(new RegFile(5, w, 2))
        val rf_raddr1    = Mux(inst_type(4) | inst_type(5), 0.U(5.W), rs1) //rs1 = 0 when J/U type
        val rf_raddr2    = rs2

        //data forwarding 
        //rs1
        val rs1_is_zero    = rf_raddr1 === 0.U
        val rs1_depend_es  = (io.es_forward.bits.en && (io.es_forward.bits.dest === rf_raddr1))
        val rs1_depend_ms  = (io.ms_forward.bits.en && (io.ms_forward.bits.dest === rf_raddr1))
        val rs1_depend_ws  = (io.ws_forward.bits.en && (io.ws_forward.bits.dest === rf_raddr1))
        val src1_depend    = !my_decoder.io.src1_sel && ~rs1_is_zero && ds_valid && (rs1_depend_es || rs1_depend_ms || rs1_depend_ws)
        val src1_block     = ( (rs1_depend_es && ~io.ws_forward.valid)
                            || (rs1_depend_ms && ~io.ms_forward.valid)
                            || (rs1_depend_ws && ~io.ws_forward.valid))
        //rs2
        val rs2_is_zero    = rf_raddr2 === 0.U
        val rs2_depend_es  = (io.es_forward.bits.en && (io.es_forward.bits.dest === rf_raddr2))
        val rs2_depend_ms  = (io.ms_forward.bits.en && (io.ms_forward.bits.dest === rf_raddr2))
        val rs2_depend_ws  = (io.ws_forward.bits.en && (io.ws_forward.bits.dest === rf_raddr2))
        val src2_depend    = !my_decoder.io.src2_sel && ~rs2_is_zero && ds_valid && (rs2_depend_es || rs2_depend_ms || rs2_depend_ws)
        val src2_block     = ( (rs2_depend_es && ~io.ws_forward.valid)
                            || (rs2_depend_ms && ~io.ms_forward.valid)
                            || (rs2_depend_ws && ~io.ws_forward.valid))

        my_rf.io.raddr1 := rf_raddr1
        my_rf.io.raddr2 := rf_raddr2
        val rf_rdata1    = Mux(rs1_depend_es, io.es_forward.bits.data,
                                     Mux(rs1_depend_ms, io.ms_forward.bits.data, 
                                             Mux(rs1_depend_ws, io.ws_forward.bits.data, my_rf.io.rdata1))
                            )
        val rf_rdata2    = Mux(rs2_depend_es, io.es_forward.bits.data,
                                     Mux(rs2_depend_ms, io.ms_forward.bits.data, 
                                             Mux(rs2_depend_ws, io.ws_forward.bits.data, my_rf.io.rdata2))
                            )
        my_rf.io.wen    := io.wb2rf.rf_we
        my_rf.io.waddr  := io.wb2rf.waddr
        my_rf.io.wdata  := io.wb2rf.wdata
    // ------------------------ to EX stage ------------------------ 
        //control signals
        io.id2ex.bits.alu_op    := my_decoder.io.alu_op
        io.id2ex.bits.src1_sel  := my_decoder.io.src1_sel
        io.id2ex.bits.src2_sel  := my_decoder.io.src2_sel
        io.id2ex.bits.dest      := rd
        io.id2ex.bits.br_type   := my_decoder.io.br_type
        io.id2ex.bits.gr_we     := my_decoder.io.rf_we
        io.id2ex.bits.wb_sel    := my_decoder.io.wb_sel
        io.id2ex.bits.mem_en    := my_decoder.io.mem_en
        io.id2ex.bits.mem_wr    := my_decoder.io.mem_wr
        io.id2ex.bits.mem_type  := my_decoder.io.mem_type
        io.id2ex.bits.rv64w     := my_decoder.io.rv64w
        io.id2ex.bits.ex_sel    := my_decoder.io.ex_sel
        io.id2ex.bits.csr_op    := my_decoder.io.csr_op 
        io.id2ex.bits.exc_type  := my_decoder.io.exc_type
        io.id2ex.bits.is_ebreak := inst_ebreak
        //data signals
        io.id2ex.bits.pc        := fs_ds_r.pc
        io.id2ex.bits.rs1_addr  := rf_raddr1
        io.id2ex.bits.rs2_addr  := rf_raddr2
        io.id2ex.bits.rs1       := rf_rdata1
        io.id2ex.bits.rs2       := rf_rdata2
        io.id2ex.bits.imm       := imm
        io.id2ex.bits.mem_wdata := rf_rdata2
        io.id2ex.bits.csr_num   := inst(31, 20)
    // ------------------------ pipeline shake hands ------------------------ 
        val ds_ready_go = ~src1_block && ~src2_block
        io.if2id.ready := !ds_valid || (ds_ready_go && io.id2ex.ready)
        io.id2ex.valid :=  ds_valid && ds_ready_go
        when(io.exc_flush || io.br_flush){
            ds_valid   := 0.B
        }.elsewhen(io.if2id.ready){
            ds_valid   := io.if2id.valid
        }
}