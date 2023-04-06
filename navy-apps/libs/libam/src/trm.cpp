#include <am.h>
#include <navy.h>
#include <stdlib.h>
uint64_t heap_start = 0x87000000;
uint64_t pmem_start = 0x83000000;
Area heap = RANGE(heap_start, PMEM_END);

void putch(char ch) {
    putchar(ch);
}

void halt(int code) {
    exit(code);
}
