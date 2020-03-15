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
	s = malloc(sizeof(min) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		s[i - min] = i;
	}
	return (s);
}
