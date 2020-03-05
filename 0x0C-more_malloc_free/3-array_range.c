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
	int *s, i = 0, temp, len;

	if (min > max)
		return (NULL);
	temp = min;
	while (temp <= max)
	{
		len++;
		temp++;
	}
	s = malloc(len * sizeof(min));
	if (s == NULL)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		i++, min++;
	}
	return (s);
}
