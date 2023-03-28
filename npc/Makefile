BUILD_DIR = ./build
SIM_HOME = ./sim
IMG ?= 

include ../Makefile

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain Elaborate -td $(BUILD_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
#	-rm -rf $(BUILD_DIR)
	-make -C $(SIM_HOME) clean

.PHONY: test verilog help compile bsp reformat checkformat clean wave sim

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	make -C $(SIM_HOME) sim IMAGE=$(IMG) ELF_SRC=$(ELF_SRC)

wave:
	make -C $(SIM_HOME) wave
