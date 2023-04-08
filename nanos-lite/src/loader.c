#include <proc.h>
#include <elf.h>
#include <fs.h>
#include <stdio.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#ifdef __ISA_AM_NATIVE__
#define EXPECT_TYPE EM_X86_64
#elif __ISA_RISCV32__
#define EXPECT_TYPE EM_RISCV
#elif __ISA_RISCV64__
#define EXPECT_TYPE EM_RISCV
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  int tmpfd = fs_open(filename, 0, 0);
  Elf_Ehdr ehdr;
  //printf("fd: %d\n", tmpfd);
  fs_read(tmpfd, &ehdr, sizeof(Elf_Ehdr));
  assert(*(uint32_t *)(&(ehdr.e_ident)) == 0x464c457f);
  assert(ehdr.e_machine == EXPECT_TYPE);
  //printf("phnum: %d\n", ehdr.e_phnum);
  Elf_Phdr phdr;
  for(int i = 0; i < ehdr.e_phnum; ++i){
    fs_lseek(tmpfd, ehdr.e_phoff + (i * ehdr.e_phentsize), SEEK_SET);
    fs_read(tmpfd, &phdr, ehdr.e_phentsize);
    if(phdr.p_type == PT_LOAD){
      uintptr_t p_vaddr = phdr.p_vaddr;
      //printf("seg %d, sz: %lx\n", i, phdr.p_filesz);
      fs_lseek(tmpfd, phdr.p_offset, SEEK_SET);
      fs_read(tmpfd, (void *)p_vaddr, phdr.p_filesz);
      memset((void *)(p_vaddr + phdr.p_filesz), 0, phdr.p_memsz - phdr.p_filesz);
    }
  }
  fs_close(tmpfd);
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  printf("load file %s\n", filename);
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = 0x%lx", entry);
  ((void(*)())entry) ();
}

