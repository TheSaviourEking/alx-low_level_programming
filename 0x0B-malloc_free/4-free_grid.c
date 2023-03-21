#include "main.h"

/**
 * free_grid -> frees 2 dimensional grid created by "alloc_grid"
 * @grid: matrix pointer
 * @height: height
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (height <= 0)
	{
		return;
	}

	if (grid == NULL)
	{
		return;
	}

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
