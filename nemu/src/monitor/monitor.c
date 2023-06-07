/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

#define FUNC_TAB_SIZE 256
struct func_tab{
  char name_tab[FUNC_TAB_SIZE][64];
  word_t pc_tab[FUNC_TAB_SIZE];
  int func_num;
} functab;

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
static char *elf_file = NULL;
static int elf_en = 0;

#ifdef CONFIG_FTRACE
static void read_ehdr(Elf64_Ehdr * ehdr, FILE * fp)
{
    int ret = fread(ehdr, sizeof(*ehdr), 1, fp);
    assert(ret == 1);
    assert(ehdr->e_ident[EI_MAG1] == 'E');
    assert(ehdr->e_ident[EI_MAG2] == 'L');
    assert(ehdr->e_ident[EI_MAG3] == 'F');
}
#endif

static void init_ftrace(){
#ifdef CONFIG_FTRACE
  if(elf_file == NULL || elf_en == 0) {
    Log("No elf file is given");
    return;
  }
  FILE *fp = fopen(elf_file, "rb");
  Assert(fp, "Can not open '%s'", elf_file);
  //read ELF header 
  Elf64_Ehdr ehdr;
  read_ehdr(&ehdr, fp);
  //get Shstrtab
  Elf64_Shdr shstrtab_shdr;
  fseek(fp, ehdr.e_shoff + ehdr.e_shstrndx * ehdr.e_shentsize, SEEK_SET);
  int ret = fread(&shstrtab_shdr, ehdr.e_shentsize, 1, fp);
  assert(ret == 1);
  //printf("shstrtab: %lx %lx\n", shstrtab_shdr.sh_offset, shstrtab_shdr.sh_size);
  //check Section Table
  Elf64_Shdr symtab_shdr;
  Elf64_Shdr strtab_shdr;
  Elf64_Shdr shdr;
  char shname[64];
  for(int i = 0; i < ehdr.e_shnum; ++i){
    fseek(fp, ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
    int ret = fread(&shdr, ehdr.e_shentsize, 1, fp);
    assert(ret == 1);
    fseek(fp, shstrtab_shdr.sh_offset + shdr.sh_name, SEEK_SET);
    char * p = fgets(shname, 64, fp);
    assert(p == shname);
    if(!strcmp(shname, ".symtab")){
      symtab_shdr = shdr;
    }else if(!strcmp(shname, ".strtab")){
      strtab_shdr = shdr;
    }
  }
  //printf("symtab: %lx %lx\n", symtab_shdr.sh_offset, symtab_shdr.sh_size);
  //printf("strtab: %lx %lx\n", strtab_shdr.sh_offset, strtab_shdr.sh_size);
  //Find function symbol
  int sym_num = symtab_shdr.sh_size / symtab_shdr.sh_entsize;
  Elf64_Sym sym;
  for(int i = 0; i < sym_num; ++i){
    fseek(fp, symtab_shdr.sh_offset + i * symtab_shdr.sh_entsize, SEEK_SET);
    int ret = fread(&sym, symtab_shdr.sh_entsize, 1, fp);
    assert(ret == 1);
    if(ELF64_ST_TYPE(sym.st_info) == STT_FUNC){
      int idx = functab.func_num;
      functab.pc_tab[idx] = sym.st_value;
      fseek(fp, strtab_shdr.sh_offset + sym.st_name, SEEK_SET);
      //printf("offset=%lx\n", strtab_shdr.sh_offset + sym.st_name);
      char * p = fgets(functab.name_tab[idx], 64, fp);
      assert(p == functab.name_tab[idx]);
      //printf("get pc=%lx name = %s\n", sym.st_value, functab.name_tab[idx]);
      functab.func_num += 1;
    }
  }
  fclose(fp);
#endif
}

//call: type=0, ret: type=1
void ftrace_print(word_t cur_pc, word_t dst_pc, int type){
#ifdef CONFIG_FTRACE
  static int ftrace_spacen = 0;
  printf("0x%lx: ", cur_pc);
  if(type == 1) ftrace_spacen--;
  for(int i = 0; i < ftrace_spacen; ++i)
    putchar(' ');
  int hit = 0;
  for(int i = 0; i < functab.func_num; ++i){
    if(dst_pc == functab.pc_tab[i]){
      hit = i;
      break;
    }
  }
  if(type == 0){
    ftrace_spacen++;
    printf("call ");
  }else if(type == 1){
    printf("ret ");
  }else
    assert(0);
  printf("[%s@0x%lx]\n", functab.name_tab[hit], dst_pc);
  #endif
}

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhe:l:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; elf_en = 1; printf("elf:%s\n", elf_file); break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           elf file for ftrace\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  init_ftrace();
  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
