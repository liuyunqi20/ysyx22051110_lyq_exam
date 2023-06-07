#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len = 0;
  while(*s != '\0'){
    ++s;
    ++len;
  }
  return len;
}

char *strcpy(char *dst, const char *src) {
  char * temp = dst;
  while(*src != '\0'){
    *dst = *src;
    dst++;
    src++;
  }
  *dst = '\0';
  return temp;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char * temp = dst;
  while(n != 0 && (*src != '\0')){
    *dst = *src;
    dst++;
    src++;
    n--;
  }
  while(n != 0){
    *dst = '\0';
    dst++;
    n--;
  }
  return temp;
}

char *strcat(char *dst, const char *src) {
  char * temp = dst;
  while(*dst != '\0'){
    dst++;
  }
  strcpy(dst, src);
  return temp;
}

int strcmp(const char *s1, const char *s2) {
  while((*s1 != '\0') && (*s2 != '\0')){
    if(*s1 == *s2){
      s1++;
      s2++;
    }else{
      break;
    }
  }
  return (*s1)-(*s2);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  while(n != 0 && (*s1 != '\0') && (*s2 != '\0')){
    if(*s1 == *s2){
      s1++;
      s2++;
    }else{
      break;
    }
    --n;
  }
  return (*s1)-(*s2);
}

void *memset(void *s, int c, size_t n) {
  uint8_t * p = (uint8_t *)s;
  while(n != 0){
    *p = (uint8_t)c;
    p++;
    --n;
  }
  return (void *)s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  uint8_t * s1;
  const uint8_t * s2;
  if((out > (in + n)) || (out < in)){
    s1 = (uint8_t *)out;
    s2 = (const uint8_t *)in;
    while(n != 0){
      *s1 = *s2;
      s1++;
      s2++;
      --n;
    }
  }else{
    s1 = (uint8_t *)out + n - 1;
    s2 = (const uint8_t *)((uint8_t *)in + n - 1);
    while(n != 0){
      *s1 = *s2;
      s1--;
      s2--;
      --n;
    }
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const uint8_t * dst = (const uint8_t *)s1;
  const uint8_t * src = (const uint8_t *)s2;
  while(n != 0){
    if(*dst != *src)
      break;
    dst++;
    src++;
    --n;
  }
  return n == 0 ? 0 : (int)((*dst)-(*src));
}

#endif
