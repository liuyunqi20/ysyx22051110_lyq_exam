import circt.stage._

object Elaborate extends App {
  // def top = new mycpu.SimTop(64)
  def top = new mycpu.ysyx_22051110_MycpuCoreTop(64, 2)
  val useMFC = true // use MLIR-based firrtl compiler
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}
