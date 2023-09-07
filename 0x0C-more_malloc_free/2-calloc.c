#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Bolcks
 * @size: Size of each blocks
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = NULL;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = (int *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
