#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: args
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints a integer
 * @args: args
 * Return: Nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: args
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: args
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: list of types of args passed
 * Return: Nothins
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{ 'c', print_char },
		{ 'i', print_int },
		{ 'f', print_float },
		{ 's', print_string },
	};
	unsigned int i = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		unsigned int j = 0;

		while (j < 4)
		{
			if (format[i] == ops[j].type)
			{
				ops[j].f(args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
