#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen(char *str);
void _strcpy(char *dest, char *src, unsigned int strt, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
