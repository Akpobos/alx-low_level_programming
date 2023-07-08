#include "main.h"

/**
 * _strchr - Locates first charter in a string
 * @s: The string
 * @c: Character to locate
 *
 * Return: Pointer to the located character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			break;
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
