#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}

