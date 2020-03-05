#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Create an array of certain range
 * @min : the min number
 * @max : the max number
 * Return: an array
 */

int *array_range(int min, int max)
{
	int *s, i = 0;

	if (min > max)
		return (NULL);
	s = malloc((max + 2) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
