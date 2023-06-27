#include "main.h"

/**
 * print_rev - takes a string and reverses it
 * @s: string
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
