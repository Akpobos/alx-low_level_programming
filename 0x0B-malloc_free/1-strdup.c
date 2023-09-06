#include "main.h"

/**
 * _strlen - Get string length
 * @str: The string
 * Return: The length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * _strdup - Duplicate a string
 * @str: String to dup
 * Return: New string or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int len;

	if (!str)
		return (NULL);
	len = _strlen(str) + 1;
	ptr = malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	for (len = 0; str[len]; len++)
		ptr[len] = str[len];
	ptr[len] = '\0';
	return (ptr);
}
