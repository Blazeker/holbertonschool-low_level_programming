#include "holberton.h"

/**
 * free_grid - free the malloc
 * @grid : array
 * @height : int
 */

void free_grid(int **grid, int height)
{
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
