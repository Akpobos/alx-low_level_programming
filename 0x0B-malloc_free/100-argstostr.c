#include "main.h"

/**
 * _strlen - Get str length
 * @str: the string
 * Return: the length
 */
unsigned int _strlen(char *str)
{
	unsigned int c = 0;

	while (*str)
	{
		c++;
		str++;
	}

	return (c);
}

/**
 * _strcp - Copy string
 * @dest: destination
 * @src: src
 * @start: index to start writing
 * Return: Nothing
 */
void _strcp(char *dest, char *src, int start)
{
	while (*src)
	{
		dest[start] = *src;
		start++;
		src++;
	}
}

/**
 * argstostr - Concat all argument vectors
 * @ac: Argument count
 * @av: Argument vector
 * Return: The concat str
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	char *ptr;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	len += ac + 1;
	ptr = malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		_strcp(ptr, av[i], len);
		len += _strlen(av[i]);
		ptr[len] = '\n';
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
