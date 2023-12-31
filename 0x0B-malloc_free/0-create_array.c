#include "main.h"

/**
 * create_array - Creates array of characters
 * @size: Size of the array
 * @c: Pre fill character
 * Return: Pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(sizeof(char) * size);

	if (!ptr || !size)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[size] = '\0';
	return (ptr);
}
