#include "function_pointers.h"

/**
 * print_name - Print name
 * @name: The name
 * @f: func pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
