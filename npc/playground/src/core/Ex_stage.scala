package mycpu
import chisel3._
import chisel3.util._

/*
    Ex stage executes caculation for arithmetical and logical inst, address of load/store
inst and target address of branch and jal inst. 
    NOTE: branch inst needs to caculate branch enable select bit and branch target address,
but Ex module only provides one ALU unit, thus Ex module calculates branch target address
using an extra adder(See io.branch.br_target).
*/
class Ex_stage(w: Int) extends Module{
    val io = IO(new Bundle{
        val id2ex      = Flipped(Decoupled(new IdtoExBundle(w)))
        val ex2mem     = Decoupled(new ExtoMemBundle(w))
        val exc_flush  = Input(Bool())
        val br_flush   = Input(Bool())
        val ms_forward = Flipped(Valid(new ForwardingBundle(w)))
        val ws_forward = Flipped(Valid(new ForwardingBundle(w)))
    })
    val es_valid     = RegInit(0.B)
    // exc / br flush 
    when(io.exc_flush || io.br_flush){
        es_valid := 0.B
    }.elsewhen(io.id2ex.ready) {
        es_valid := io.id2ex.valid
    }
    val ds_es_r      = RegInit(0.U.asTypeOf(new IdtoExBundle(w)))
    when(io.id2ex.fire){
        ds_es_r := io.id2ex.bits
    }
    // ------------------------ data forwarding ------------------------ 
        //rs1
        val rs1_is_zero    = ~ds_es_r.rs1_addr.orR
        val rs1_depend_ms  = (io.ms_forward.stage_valid && (io.ms_forward.dest === ds_es_r.rs1_addr))
        val rs1_depend_ws  = (io.ws_forward.stage_valid && (io.ws_forward.dest === ds_es_r.rs1_addr))
        val src1_depend    = !ds_es_r.src1_sel && (rs1_depend_ms || rs1_depend_ws) && ~rs1_is_zero && es_valid
        val src1_block     = (rs1_depend_ms && ~io.ms_forward.valid) || (rs1_depend_ws && ~io.ws_forward.valid)
        //rs2
        val rs2_is_zero   = ~ds_es_r.rs2_addr.orR
        val rs2_depend_ms = (io.ms_forward.stage_valid && (io.ms_forward.dest === ds_es_r.rs2_addr))
        val rs2_depend_ws = (io.ws_forward.stage_valid && (io.ws_forward.dest === ds_es_r.rs2_addr))
        val src2_depend   = !ds_es_r.src2_sel && (rs2_depend_ms || rs2_depend_ws) && ~rs2_is_zero && es_valid
        val src2_block     = (rs2_depend_ms && ~io.ms_forward.valid) || (rs2_depend_ws && ~io.ws_forward.valid)
    // ------------------------ ALU ------------------------ 
        val my_alu        = Module(new Alu(w))
        val alu_src1      = Mux(src1_depend, Mux(rs1_depend_ms, io.ms_forward.data, io.ws_forward.data), ds_es_r.rs1) //TODO: data forwarding
        val alu_src2      = Mux(src2_depend, Mux(rs2_depend_ms, io.ms_forward.data, io.ws_forward.data), ds_es_r.rs2) //TODO: data forwarding
        my_alu.io.src1   := Mux(ds_es_r.src1_sel, ds_es_r.pc, alu_src1)
        my_alu.io.src2   := Mux(ds_es_r.src2_sel, ds_es_r.imm, alu_src2)
        my_alu.io.alu_op := ds_es_r.alu_op
        //sign-extend lower 32 bits when RV64W inst
        val alu_res       = Cat(Mux(ds_es_r.rv64w, Fill(w - 32, my_alu.io.res(31)), my_alu.io.res(63, 32)), 
                                my_alu.io.res(31, 0))
        val carry_out     = my_alu.io.cout
        val overflow      = my_alu.io.overflow
        val s1_lt_s2      = overflow ^ alu_res(w-1)
        val s1_ltu_s2     = ~carry_out
    // ------------------------ branch ------------------------ 
        //val (NB, BEQ, BNE, BLT, BGE, BLTU, BGEU, JAL, JALR) = 
        //   ("h01".U, "h02".U, "h04".U, "h08".U, "h10".U, "h20".U, "h40".U, "h80".U, "h100".U)
        val br_type          = ds_es_r.br_type
        //B: pc+imm     JAL/JALR: rs1+imm
        val is_jal           = br_type(7) === 1.U | br_type(8) === 1.U
        //sequential pc
        val pc_seq           = ds_es_r.pc + 4.U
        io.ex2mem.bits.br.br_target := Mux(is_jal, alu_res, ds_es_r.pc + ds_es_r.imm)
        io.ex2mem.bits.br.br_en     := Mux1H(Seq(
            /*NB  */ br_type(0) -> 0.B,
            /*BEQ */ br_type(1) -> (alu_res === 0.U),
            /*BNE */ br_type(2) -> (alu_res =/= 0.U),
            /*BLT */ br_type(3) -> s1_lt_s2,
            /*BGE */ br_type(4) -> ~s1_lt_s2,
            /*BLTU*/ br_type(5) -> s1_ltu_s2,
            /*BGEU*/ br_type(6) -> ~s1_ltu_s2,
            /*JAL */ br_type(7) -> 1.B,
            /*JALR*/ br_type(8) -> 1.B,
        )) & es_valid
    // ------------------------ select result ------------------------ 
    val res = Mux1H(Seq(
        /* NSLT   */ ds_es_r.ex_sel(0) -> alu_res,
        /* SLT_T  */ ds_es_r.ex_sel(1) -> (s1_lt_s2  === 1.U).asUInt,
        /* SLTU_T */ ds_es_r.ex_sel(2) -> (s1_ltu_s2 === 1.U).asUInt,
    ))
    // ------------------------ to Mem stage ------------------------ 
        io.ex2mem.bits.pc        := ds_es_r.pc
        //control
        io.ex2mem.bits.gr_we     := ds_es_r.gr_we
        io.ex2mem.bits.dest      := ds_es_r.dest
        io.ex2mem.bits.wb_sel    := ds_es_r.wb_sel
        io.ex2mem.bits.mem_en    := ds_es_r.mem_en
        io.ex2mem.bits.mem_wr    := ds_es_r.mem_wr
        io.ex2mem.bits.mem_type  := ds_es_r.mem_type
        io.ex2mem.bits.mem_wdata := ds_es_r.mem_wdata
        io.ex2mem.bits.csr_op    := ds_es_r.csr_op
        io.ex2mem.bits.exc_type  := ds_es_r.exc_type
        //data
        io.ex2mem.bits.result    := Mux(is_jal, pc_seq, res)
        io.ex2mem.bits.csr_num   := ds_es_r.csr_num
        io.ex2mem.bits.rs1       := ds_es_r.rs1
    // ------------------------ pipeline shake hands ------------------------ 
    val es_ready_go  = src1_block || src2_block
    io.id2ex.ready  := !es_valid || (es_ready_go && io.ex2mem.ready)
    io.ex2mem.valid :=  es_valid && es_ready_go
}