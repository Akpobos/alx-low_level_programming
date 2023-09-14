#include "variadic_functions.h"

/**
 * print_string - Prints string
 * @separator: Separator
 * @n: number of strings passed
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			char *str = va_arg(args, char *);

			printf("%s", str ? str : "(nil)");
			if (separator && i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
