#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: array
 * @n: number of element
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		int tmp = *(a + n - 1 - c);
		
		*(a + n - 1 - c) = *(a + c);
		*(a + c) = tmp;
	}
}
