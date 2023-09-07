#include "main.h"

/**
 * _realloc - Reallocates memory block
 * @ptr: prev memory
 * @old_size: size of ptr
 * @new_size: new size
 * Return: New pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2 = NULL;
	unsigned int i, stop = old_size;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr2 = malloc(sizeof(*ptr2) * new_size);
	if (!ptr2)
		return (NULL);
	if (!ptr)
		return (ptr2);
	if (old_size > new_size)
		stop = new_size;
	for (i = 0; i < stop; i++)
		ptr2[i] = ((char *)(ptr))[i];
	free(ptr);
	ptr = NULL;
	return (ptr2);
}
