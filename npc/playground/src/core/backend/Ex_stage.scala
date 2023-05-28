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
        val es_forward = Valid(new ForwardingBundle(w))
    })
    val es_valid   = RegInit(0.B)
    val ex_flush   = io.exc_flush || io.br_flush  
    val my_alu     = Module(new Alu(w))
    val alu_wait   = RegInit(0.B)
    val alu_buf_en = RegInit(0.B)
    val alu_buf    = RegInit(0.U(w.W))
    // exc / br flush 
        when(ex_flush){
            es_valid := 0.B
        }.elsewhen(io.id2ex.ready) {
            es_valid := io.id2ex.valid
        }
        val ds_es_r  = RegInit(0.U.asTypeOf(new IdtoExBundle(w)))
        when(io.id2ex.fire){
            ds_es_r := io.id2ex.bits
        }
    // ------------------------ ALU ------------------------ 
        my_alu.io.in.valid          := es_valid
        my_alu.io.in.bits.alu_flush := ex_flush
        my_alu.io.in.bits.src1      := Mux(ds_es_r.src1_sel, ds_es_r.pc, ds_es_r.rs1)
        my_alu.io.in.bits.src2      := Mux(ds_es_r.src2_sel, ds_es_r.imm, ds_es_r.rs2)
        my_alu.io.in.bits.alu_op    := ds_es_r.alu_op
        //sign-extend lower 32 bits when RV64W inst
        val alu_res       = Mux(alu_buf_en, alu_buf, 
                                    Cat(Mux(ds_es_r.rv64w, Fill(w - 32, my_alu.io.out.bits.res(31)), my_alu.io.out.bits.res(63, 32)), 
                                my_alu.io.out.bits.res(31, 0)) )
        val carry_out     = my_alu.io.out.bits.cout
        val overflow      = my_alu.io.out.bits.overflow
        val s1_lt_s2      = overflow ^ alu_res(w-1)
        val s1_ltu_s2     = ~carry_out
    // ------------------------ Ex Reg ------------------------
        when(ex_flush || my_alu.io.out.valid) {
            alu_wait := 0.B
        } .elsewhen(my_alu.io.in.fire && ~my_alu.io.out.valid) {
            alu_wait := 1.B
        }
        when(ex_flush || (alu_buf_en && io.ex2mem.ready)){
            alu_buf_en := 0.B
        } .elsewhen(my_alu.io.out.valid && alu_wait && ~io.ex2mem.ready) {
            alu_buf_en := 1.B
            alu_buf    := alu_res
        }
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
        io.ex2mem.bits.is_ebreak := ds_es_r.is_ebreak
        //data
        io.ex2mem.bits.result    := Mux(is_jal, pc_seq, res)
        io.ex2mem.bits.csr_num   := ds_es_r.csr_num
        io.ex2mem.bits.rs1       := ds_es_r.rs1
    // ------------------------ forwarding ------------------------ 
        io.es_forward.valid     := io.ex2mem.valid && ~(ds_es_r.mem_en && ~ds_es_r.mem_wr) && ~ds_es_r.csr_op.orR
        io.es_forward.bits.en   := es_valid && io.ex2mem.bits.gr_we
        io.es_forward.bits.dest := io.ex2mem.bits.dest
        io.es_forward.bits.data := io.ex2mem.bits.result
    // ------------------------ pipeline shake hands ------------------------ 
        val es_ready_go  = ~alu_wait || (my_alu.io.in.fire && my_alu.io.out.valid)
        io.id2ex.ready  := !es_valid || (es_ready_go && io.ex2mem.ready)
        io.ex2mem.valid :=  es_valid && es_ready_go
}