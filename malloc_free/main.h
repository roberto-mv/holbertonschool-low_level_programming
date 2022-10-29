#ifndef HOLBERTON_H
#define HOLBERTON_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _putchar(char c);
int string_len(char *str);
char *truncate_extra_spaces(char *str1, char *str);
char **mem_alloc(char *str1);

#endif
