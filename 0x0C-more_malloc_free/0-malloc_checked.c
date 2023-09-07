#include "main.h"

/**
 * malloc_checked - Allocate memory
 * @b: The size
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
