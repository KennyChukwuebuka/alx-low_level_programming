#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
void error(void);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);
int is_digit(char *s);
int _strlen(char *s);
int _putchar(char c);

#endif
