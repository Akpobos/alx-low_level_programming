#include "main.h"
/**
 *_strcpy - copy string at the end of another string including \0.
 *@dest: pointer to be copied to.
 *@src: pointer to address to be copied.
 *
 *Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
