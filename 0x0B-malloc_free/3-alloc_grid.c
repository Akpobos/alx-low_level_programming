#include "main.h"

/**
 * alloc_grid - Create 2D array
 * @width: Teh width
 * @height: The height
 * Return: Pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(ptr) * height);
	if (!ptr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		int j;

		ptr[i] = malloc(sizeof(int) * width);
		if (!ptr[i])
			return (NULL);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
