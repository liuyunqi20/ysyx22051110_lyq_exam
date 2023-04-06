#include <am.h>
#include <navy.h>
#include <stdlib.h>
Area heap = RANGE(HEAP_START, PMEM_END);

void putch(char ch) {
    putchar(ch);
}

void halt(int code) {
    exit(code);
}
