#include <fs.h>

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t wr_ptr;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t serial_write(const void *buf, size_t offset, size_t len);

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, &serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, &serial_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode){
  int len = LENGTH(file_table);
  for(int i = 0; i < len; ++i){
    if(!strcmp(pathname, file_table[i].name)){
      file_table[i].wr_ptr = 0;
      return i;
    }
  }
  assert(0);  //no such file or directory
}

size_t fs_read(int fd, void *buf, size_t len){
  assert(fd >= 0 && fd < LENGTH(file_table));
  if(file_table[fd].read == NULL){
    len = (file_table[fd].size - file_table[fd].wr_ptr) > len ? len : 
            (file_table[fd].size - file_table[fd].wr_ptr);
    return ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].wr_ptr, len);
  }else{
    return file_table[fd].read(buf, file_table[fd].wr_ptr, len);
  }
}

size_t fs_write(int fd, const void *buf, size_t len){
  assert(fd >= 0 && fd < LENGTH(file_table));
  if(file_table[fd].write == NULL){
    len = (file_table[fd].size - file_table[fd].wr_ptr) > len ? len : 
            (file_table[fd].size - file_table[fd].wr_ptr);
    return ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].wr_ptr, len);
  }else{
    return file_table[fd].write(buf, file_table[fd].wr_ptr, len);
  }
}

size_t fs_lseek(int fd, size_t offset, int whence){
  assert(fd >= 0 && fd < LENGTH(file_table));
  if(file_table[fd].read != NULL || file_table[fd].write != NULL)
    return -1;
  switch(whence){
    case SEEK_SET:
      file_table[fd].wr_ptr = offset; break;
    case SEEK_CUR:
      file_table[fd].wr_ptr += offset; break;
    case SEEK_END:
      file_table[fd].wr_ptr = file_table[fd].wr_ptr + file_table[fd].size; break;
    default: assert(0);
  }
  return file_table[fd].wr_ptr;
}

int fs_close(int fd){
  return 0;
}

char * fd2str(int fd){
  assert(fd >= 0 && fd < LENGTH(file_table));
  return file_table[fd].name;
}