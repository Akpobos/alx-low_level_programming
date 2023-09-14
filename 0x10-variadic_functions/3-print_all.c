#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: args
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, char));
}

/**
 * print_all - Prints anything
 * @format: list of types of args passed
 * Return: Nothins
 */
void print_all(const char * const format, ...)
{

}
