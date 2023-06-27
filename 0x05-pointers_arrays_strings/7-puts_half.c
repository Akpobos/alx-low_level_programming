#include "main.h"

/**
 * puts_half - returns half of a string
 * @str: takes a pointer address
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i, len = 0, mid;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		mid = len / 2;

		for (i = mid; i < len; i++)
			_putchar(str[i]);
	}

	else
	{
		mid = (len - 1) / 2;

		for (i = mid + 1; i < len; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
