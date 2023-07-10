#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
void free_grid(int **grid, int height);

#endif
