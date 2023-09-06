#include "main.h"

/**
 * _strlen - Get string length
 * @str: the string
 * Return: The length
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	if (str)
	{
		while (*str)
		{
			i++;
			str++;
		}
	}
	return (i);
}

/**
 * str_concat - Concatenates a string
 * @s1: string 1
 * @s2: string 2
 * Return: The concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int s1_len, s2_len, t_len, i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	t_len = s1_len + s2_len;

	ptr = malloc(sizeof(char) * (t_len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s1)
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
