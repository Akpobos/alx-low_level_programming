#include "main.h"

/**
 * _calloc - Allocates memory for array
 * @nmemb: the height
 * @size: width
 * Return: Pointer to alloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	return (ptr);
}
