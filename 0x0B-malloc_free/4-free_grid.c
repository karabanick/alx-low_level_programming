#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the two dimensional grid created by alloc_grid
 * @grid: input
 * @height: size
 * Return: result
 */

void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL)
	{
		return;
	}

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);
}
