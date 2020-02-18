#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print the array
 * @a : an array
 * @n : an int
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
		printf("%d%s", a[i], ", ");
		}
	}
	printf("\n");
}
