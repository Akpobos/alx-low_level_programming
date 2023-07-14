#include "main.h"

/**
 * malloc_checked - Allocate memory
 * @b: size of memory
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
