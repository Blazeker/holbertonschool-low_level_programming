#include "holberton.h"

/**
 * reverse_array - Reverse an array
 * @a : int
 * @n : int
 */

void reverse_array(int *a, int n)
{
	int num = 0;
	int i = 0;

	for (i = 0; n - 1 >= 0 && i <= n - 1; i++)
	{
		num = a[i];
		a[i] = a[n - 1];
		a[n - 1] = num;
		n--;
	}
}
