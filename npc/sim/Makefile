OBJ_DIR = ./obj_dir
CPP_HOME = ./cpp
DUT_DIR = ../build
DUT_NAME = SimTop
CPP_INCLUDE = $(NPC_HOME)/sim/cpp/include/
SRC_PATH = $(NPC_HOME)/playground/src/vsrc
# ------------------------ config ------------------------
#ITRACE = 1
#MTRACE = 1
#DIFF = 1
#WAVE = 1
BATCH_MODE = 1
DEVICE = 1
HAS_VGA = 1
HAS_KEYBOARD = 1

# ------------------------ verilator ------------------------
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

# ------------------------ verilator input  ------------------------
#CPP_SRCS += $(wildcard $(CPP_HOME)/include/*.h)
DIRS := $(shell find $(CPP_HOME) -maxdepth 3 -type d)
CPP_SRCS = $(foreach dir,$(DIRS),$(wildcard $(dir)/*.cpp))
VERILOG_SRCS = $(DUT_DIR)/$(DUT_NAME).v
VERILATOR_INPUT += $(VERILOG_SRCS) $(CPP_SRCS)

# ------------------------ verilator flags ------------------------
#VERILATOR_FLAGS += -y $(CPP_INCLUDE)
VERILATOR_FLAGS += -cc
VERILATOR_FLAGS += --exe
VERILATOR_FLAGS += --build
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += -y $(SRC_PATH)
VERILATOR_FLAGS += -CFLAGS -I$(CPP_INCLUDE)

ifdef ITRACE
LLVM_LIBS        = $(shell llvm-config --libs)
LLVM_CXXFLAGS    = $(shell llvm-config --cxxflags)
VERILATOR_FLAGS += $(addprefix -CFLAGS , $(LLVM_CXXFLAGS))
VERILATOR_FLAGS += -CFLAGS -fPIE
VERILATOR_FLAGS += -CFLAGS -DITRACE
VERILATOR_FLAGS += $(addprefix -LDFLAGS , $(LLVM_LIBS))
else
TEMP_VAR := $(VERILATOR_INPUT)
VERILATOR_INPUT = $(filter-out ./cpp/src/utils/disasm.cpp, $(TEMP_VAR))
endif

VERILATOR_FLAGS += -LDFLAGS -lreadline

ifdef MTRACE
VERILATOR_FLAGS += -CFLAGS -DMTRACE
endif

ifdef DIFF
VERILATOR_FLAGS += -CFLAGS -DDIFFTEST
endif

ifdef WAVE
VERILATOR_FLAGS += -CFLAGS -DDUMPWAVE
endif

ifdef DEVICE
VERILATOR_FLAGS += -CFLAGS -DDEVICE
VERILATOR_FLAGS += -LDFLAGS -lSDL2
endif

ifdef HAS_VGA
VERILATOR_FLAGS += -CFLAGS -DHAS_VGA
endif

ifdef HAS_KEYBOARD
VERILATOR_FLAGS += -CFLAGS -DHAS_KEYBOARD
endif

ifdef BATCH_MODE
VERILATOR_FLAGS += -CFLAGS -DBATCH_MODE
endif
# ------------------------ verilator run parameters  ------------------------
IMAGE ?= 
ifdef DIFF
DIFF_PATH = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
RUN_ARGS += --diff=$(DIFF_PATH)
endif
ifdef ELF_SRC
RUN_ARGS += --elf=$(ELF_SRC)
endif
RUN_ARGS += $(IMAGE)

default: sim

build:
	@echo "---------------- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

run:
	@echo "---------------- RUN SIMULATION ----------------"
	$(OBJ_DIR)/V$(DUT_NAME) $(RUN_ARGS)

sim: build run

wave:
	gtkwave waveform.vcd

clean:
	-rm -rf ./obj_dir
	-rm waveform.vcd

clean_wave:
	-rm waveform.vcd

.PHONY: build run sim wave clean
