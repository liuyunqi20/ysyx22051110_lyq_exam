#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static int cats(char * dst, char * src){
  int i = 0;
  while(*src != '\0'){
    *dst = *src;
    dst++;
    src++;
    i++;
  }
  return i;
}

static void itoa(char * s, int num){
  int i = 0;
  if(num < 0){
    s[i++] = '-';
    num = -num;
  }
  if(num == 0)
    s[i++] = '0';
  else{
    while(num != 0){
      s[i++] = (num % 10) + '0';
      num = num / 10;
    }
    int t1 = s[0] == '-' ? 1:0;
    int t2 = i-1;
    while(t2 > t1){
      char temp = s[t1];
      s[t1] = s[t2];
      s[t2] = temp;
      t1++;
      t2--;
    }
  }
  s[i] = '\0';
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
    int ret = 0;
  char ch;
  int p = 0;
  char num_buf[32];

  while((ch = *fmt) != '\0'){
    if(ch != '%'){
      out[p++] = ch;
    }else{
      fmt++;
      ch = *fmt;
      switch(ch){
        case 's': 
          char * s = (char *)va_arg(ap, char *);
          if(s == out) return -1;
          p += cats(out + p, s);
          break;
        case 'd':
          int temp = (int)va_arg(ap, int);
          itoa(num_buf, temp);
          p += cats(out + p, num_buf);
          break;
        default:
          out[p++] = '%';
          out[p++] = ch;
      }
    }
    fmt++;
  }
  out[p] = '\0';
  return ret;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
