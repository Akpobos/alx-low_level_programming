#include "main.h"

/**
 * _strlen - Get string length
 * @str: the string
 * Return: The length
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
 * _strjoin - Joins string
 * @dest: Destination string
 * @src: source string
 * @start: Join start position
 * @count: number of chars to join
 * Return: Nothing
 */
void _strjoin(char *dest, char *src, unsigned int start, unsigned int count)
{
	unsigned int i;

	for (i = 0; i < count; i++)
		dest[i + start] = src[i];
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number to concat
 * Return: New string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int len1, len2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (!ptr)
		return (NULL);
	_strjoin(ptr, s1, 0, len1);
	_strjoin(ptr, s2, len1, n);
	ptr[len1 + n] = '\0';
	return (ptr);
}
