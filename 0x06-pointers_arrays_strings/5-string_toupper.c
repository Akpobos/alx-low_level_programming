#include "main.h"
/**
 * string_toupper - Change case
 * @s: Input
 *
 * Return: pointer to the string
 */
char *string_toupper(char *s)
{
	char *ptr = s;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = 'A' + (*ptr - 'a');
		ptr++
	}
	return (s);
}
