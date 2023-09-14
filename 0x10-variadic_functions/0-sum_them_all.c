#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (!n)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}