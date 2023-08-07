#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int _putchar(char c);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /*main.h*/
