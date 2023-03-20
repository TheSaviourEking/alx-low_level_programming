#include "main.h"

/**
 * alloc_grid -> Returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: Height of array
 *
 * Return: "NULL" on failure else a pointer to a 2 dimensional array of
 * integers
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL); /* invalid dimensions */
	}

	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL); /* allocation failed */
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			/* deallocate previously allocated memory */
			for (j = 0; j < i; j++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL); /* allocation failed */
		}
	}

	/* Initialize all elements to zero */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
