#include "main.h"

/**
 * free_grid - Free 2D array memory
 * @grid: The array
 * @height: The height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i])
				free(grid[i]);
		}
		free(grid);
	}
}
