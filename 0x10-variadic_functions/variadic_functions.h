#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - op struct
 * @type: The type
 * @f: the function
 */
struct op
{
	char type;
	void (*f)(va_list args);
}

/* typedef op_t - Typedef for op */
typedef struct op op_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
#endif
