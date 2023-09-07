#include "main.h"

/**
 * malloc_checked - Allocate memory
 * @b: The size
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
