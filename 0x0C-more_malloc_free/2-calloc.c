#include "main.h"

/**
 * _calloc - Allocates memory for array
 * @nmemb: the height
 * @size: width
 * Return: Pointer to alloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr, i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
