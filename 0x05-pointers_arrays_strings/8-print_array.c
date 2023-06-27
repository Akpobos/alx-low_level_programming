#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: takes a array
 * @n: takes number of elements in array
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
