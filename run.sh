#!/bin/bash

cd ysyx_exam
source exam-init.sh
cd nanos-lite
make ARCH=riscv64-nemu update
make ARCH=riscv64-nemu run
make ARCH=riscv64-npc run
