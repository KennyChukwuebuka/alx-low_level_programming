#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>
#include <elf.h>

#define ELF_MAGIC_SIZE 4

#define BUFFER_SIZE 1024

typedef struct {
    unsigned char e_ident[ELF_MAGIC_SIZE];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeaderData;

int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /*main.h*/
