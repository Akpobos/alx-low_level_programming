#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of the array
 * @array: The array
 * @size: Size of the array
 * @action: Function to execute
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
