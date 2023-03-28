package mycpu
import chisel3._
import chisel3.util._

class Ex_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val pc     = Input(UInt(w.W))
        val id2ex  = Flipped(new IdtoExBundle(w))
        val ex2mem = new ExtoMemBundle(w)
        val branch = new BranchBundle(w)
    })
    //ALU
        val my_alu        = Module(new Alu(w))
        my_alu.io.src1   := Mux(io.id2ex.src1_sel, io.id2ex.pc, io.id2ex.rs1)
        my_alu.io.src2   := Mux(io.id2ex.src2_sel, io.id2ex.imm, io.id2ex.rs2)
        my_alu.io.alu_op := io.id2ex.alu_op
        //sign-extend lower 32 bits when RV64W inst
        val alu_res       = Cat(Mux(io.id2ex.rv64w, Fill(w - 32, my_alu.io.res(31)), my_alu.io.res(63, 32)), 
                                my_alu.io.res(31, 0))
        val carry_out     = my_alu.io.cout
        val overflow      = my_alu.io.overflow
        val s1_lt_s2      = overflow ^ alu_res(w-1)
        val s1_ltu_s2     = ~carry_out
    //branch
        //val (NB, BEQ, BNE, BLT, BGE, BLTU, BGEU, JAL, JALR) = 
        //   ("h01".U, "h02".U, "h04".U, "h08".U, "h10".U, "h20".U, "h40".U, "h80".U, "h100".U)
        val br_type          = io.id2ex.br_type
        //B: pc+imm     JAL/JALR: rs1+imm
        val is_jal           = br_type(7) === 1.U | br_type(8) === 1.U
        //sequential pc
        val pc_seq           = io.pc + 4.U
        io.branch.pc_seq    := pc_seq
        io.branch.br_target := Mux(is_jal, alu_res, io.pc + io.id2ex.imm)
        io.branch.br_en     := Mux1H(Seq(
            /*NB  */ br_type(0) -> 0.B,
            /*BEQ */ br_type(1) -> (alu_res === 0.U),
            /*BNE */ br_type(2) -> (alu_res =/= 0.U),
            /*BLT */ br_type(3) -> s1_lt_s2,
            /*BGE */ br_type(4) -> ~s1_lt_s2,
            /*BLTU*/ br_type(5) -> s1_ltu_s2,
            /*BGEU*/ br_type(6) -> ~s1_ltu_s2,
            /*JAL */ br_type(7) -> 1.B,
            /*JALR*/ br_type(8) -> 1.B,
        ))
    //select result
    val res = Mux1H(Seq(
        /* NSLT   */ io.id2ex.ex_sel(0) -> alu_res,
        /* SLT_T  */ io.id2ex.ex_sel(1) -> (s1_lt_s2  === 1.U).asUInt,
        /* SLTU_T */ io.id2ex.ex_sel(2) -> (s1_ltu_s2 === 1.U).asUInt,
    ))
    //to Mem stage
        //write back pc + 4 when jal/jalr
        io.ex2mem.result    := Mux(is_jal, pc_seq, res)
        io.ex2mem.gr_we     := io.id2ex.gr_we
        io.ex2mem.dest      := io.id2ex.dest
        io.ex2mem.wb_sel    := io.id2ex.wb_sel
        io.ex2mem.mem_en    := io.id2ex.mem_en
        io.ex2mem.mem_wr    := io.id2ex.mem_wr
        io.ex2mem.mem_type  := io.id2ex.mem_type
        io.ex2mem.mem_wdata := io.id2ex.mem_wdata
}