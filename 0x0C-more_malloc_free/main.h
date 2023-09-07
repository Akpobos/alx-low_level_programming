#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void *malloc_checked(unsigned int b);
unsigned int _strlen(char *str);
void _strjoin(char *dest, char *src, unsigned int start, unsigned int count);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
