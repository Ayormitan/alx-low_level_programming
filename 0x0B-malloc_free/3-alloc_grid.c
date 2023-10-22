#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - Allocates memeory
 *@width: The grids width
 *@height: The height of the grid
 *
 * Return: Greed
 */
int **alloc_grid(int width, int height)
{
	int **gree;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	gree = malloc(sizeof(int *) * height);
	if (gree == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		gree[x] = malloc(sizeof(int) * width);
		if (gree[x] == NULL)
		{
			for (; x >= 0; x--)
				free(gree[x]);
			free(gree);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			gree[x][y] = 0;
	}
	return (gree);
}
