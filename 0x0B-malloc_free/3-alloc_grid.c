#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - locate a grid
 * @width : an int
 * @height : an int
 * Return: an array
 */

int **alloc_grid(int width, int height)
{
	int **s, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
			for (j = 0; j < width; j++)
			{
				s[i][j] = 0;
			}
	}
	return (s);
}
