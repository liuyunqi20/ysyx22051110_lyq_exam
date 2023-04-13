#include "sim_monitor.h"
#include "sim_cpu.h"
#include <getopt.h>

static char *diff_so_file = NULL;
static int difftest_port = 1234;
static char *img_file = NULL;
static char *elf_file = NULL;
static int elf_en = 0;
#ifdef ITRACE
extern "C" void init_disasm(const char *triple);
#endif

int load_sim_image(){

    FILE *fp = fopen(img_file, "rb");
    //assert(fp, "Can not open '%s'", img_file);
    if(fp==NULL) assert(0);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    printf("The image is %s, size = %ld\n", img_file, size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread((void *)get_pmem_addr(MBASE), size, 1, fp);
    assert(ret == 1);

    fclose(fp);
    return size;
}

int init_image(){
    int image_size = 0;
    if(img_file != NULL)
        image_size = load_sim_image();
    else {
        int isize = 0x4;
        uint64_t iaddr = 0x80000000;
        //mov $6, 1
        vaddr_write(iaddr, isize, 0x00100313);
        iaddr += isize;
        //auipc $5, 0
        vaddr_write(iaddr, isize, 0x00000297);
        iaddr += isize;
        //addi $5, $5, 0x1000
        vaddr_write(iaddr, isize, 0x10028293);
        iaddr += isize;
        for(int i = 0; i < 4; ++i){
            //sw $6, 0($5)
            vaddr_write(iaddr            , isize, 0x0062a023);
            //sw $6, 4($5)
            vaddr_write(iaddr + isize    , isize, 0x0062a223);
            //lw $7, 0($5)
            vaddr_write(iaddr + isize * 2, isize, 0x0002a223);
            //lw $7, 4($5)
            vaddr_write(iaddr + isize * 3, isize, 0x0002a383);
            //addi $5, $5, 8
            vaddr_write(iaddr + isize * 4, isize, 0x00828293);
            //addi $6, $6, 1
            vaddr_write(iaddr + isize * 5, isize, 0x00130313);
            iaddr += isize * 6;
        }
        //mv a0, 0
        vaddr_write(iaddr, isize, 0x00000513);
        iaddr += isize;
        //ebreak
        vaddr_write(iaddr, isize, 0x00100073);
        image_size = 116;
    }
    return image_size;
}

static int parse_args(int argc, char *argv[]) {
    //printf("parseargs: %d\n", argc);
  const struct option table[] = {
    {"diff"     , required_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-he:d:", table, NULL)) != -1) {
    switch (o) {
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; elf_en = 1; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-e,--elf=FILE           elf file for ftrace\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]){
    //parse arguments
    parse_args(argc, argv);
    //load image to memory
    int image_size = init_image();
    //init cpu
    init_cpu();
    //initialize difftest
#ifdef DIFFTEST
    init_difftest(diff_so_file, image_size, difftest_port);
#endif
    //initialize sdb
    init_sdb();
#ifdef DEVICE
    init_device();
#endif

#ifdef ITRACE
    init_disasm("riscv64-pc-linux-gnu");
#endif

    printf("[npc] monitor initialize success!\n");
    if(img_file)
        printf("The image file is %s\n", elf_file);
    if(elf_file)
        printf("The ELF file is %s\n", elf_file);
    if(diff_so_file)
        printf("The difftest so file is %s\n", diff_so_file);
}