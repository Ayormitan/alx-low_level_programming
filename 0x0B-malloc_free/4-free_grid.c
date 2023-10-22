#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array off maloc
 * @gird: Second grid
 * @height: Height dimension of grid
 * Reurn: Freeds memory in a grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free (grid[i]);
	}
	free(grid);
}
