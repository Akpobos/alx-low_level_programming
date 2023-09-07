#include "main.h"

/**
 * array_range - CreAte attay of integers
 * @min: start int
 * @max: end int
 * Return: Pointer to the new array
 */
int *array_range(int min, int max)
{
	int len;
	int *ptr = NULL;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (!ptr)
		return (NULL);
	len = 0;
	while (min <= max)
	{
		ptr[len] = min;
		min++;
		len++;
	}
	return (ptr);
}
