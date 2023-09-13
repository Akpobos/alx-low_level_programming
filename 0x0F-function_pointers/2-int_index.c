#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: pointer to the search function
 * Return: The integer found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) > 0)
			return (j);
	}

	return (-1);
}
