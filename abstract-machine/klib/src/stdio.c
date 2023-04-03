#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char print_buf[4096];

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

static void htoa(char * s, uint64_t num){
  int i = 0;
  if(num == 0)
    s[i++] = '0';
  else{
    while(num != 0){
      int temp = num % 16;
      if(temp < 0) temp = -temp;
      s[i++] = temp < 10 ? (temp + '0') : (temp - 10 + 'a');
      num = num / 16;
    }
    int t1 = 0;
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

static void itoa(char * s, int num){
  int i = 0;
  if(num < 0){
    s[i++] = '-';
  }
  if(num == 0)
    s[i++] = '0';
  else{
    while(num != 0){
      int temp = num % 10;
      if(temp < 0) temp = -temp;
      s[i++] = temp + '0';
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
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(print_buf, fmt, ap);
  va_end(ap);
  for(int i = 0; i < 4096 && print_buf[i]!='\0'; ++i)
    putch(print_buf[i]);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
    int ret = 0;
  char ch;
  int p = 0;
  char num_buf[68];

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
        case 'c':
          int tmpch = (int)va_arg(ap, int);
          out[p++] = (char)tmpch;
          break;
        case 'x':
          int tempx = (int)va_arg(ap, int);
          itoa(num_buf, tempx);
          p += cats(out + p, num_buf);
          break;
        case 'l':
          uint64_t templx = (uint64_t)va_arg(ap, uint64_t);
          if(*(fmt + 1) == 'x'){
            htoa(num_buf, templx);
            p += cats(out + p, num_buf);
            fmt++;
          }
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
  va_list ap;
  va_start(ap, fmt);
  vsnprintf(print_buf, n, fmt, ap);
  va_end(ap);
  int i;
  int maxlen = n < 4096 ? n : 4096;
  for(i = 0; i < maxlen && print_buf[i]!='\0'; ++i)
    out[i] = print_buf[i];
  //printf("out: %s\n", out);
  return i;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  return vsprintf(out, fmt, ap);
}

#endif
