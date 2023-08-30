#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 * Return: The Length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
		len = 1 + _strlen_recursion(s + 1);
	return (len);
}
