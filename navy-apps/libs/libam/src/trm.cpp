#include <am.h>
#include <navy.h>
#include <stdlib.h>
uint64_t heap_start = 0x86000000;
Area heap = RANGE(heap_start, PMEM_END);

void putch(char ch) {
    putchar(ch);
}

void halt(int code) {
    exit(code);
}
