#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the diags
 * @a : an int
 * @size : an int
 */

void print_diagsums(int *a, int size)
{
	int i = 0, c1 = 0, c2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		c1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i = i + (size - 1))
	{
		c2 += a[i];
	}
	printf("%d%s%d%s", c1, ", ", c2, "\n");
}
