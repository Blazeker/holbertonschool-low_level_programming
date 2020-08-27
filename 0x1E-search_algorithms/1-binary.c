#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value i with binary search algor
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search
 * Return: The search of the first index found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, l = 0, j = size - 1, x;

	if (!array)
		return (-1);
	while (l <= j)
	{
		printf("Searching in array: ");
		for (i = l; i <= j; i++)
		{
			printf("%d", array[i]);
			if (i < j)
				printf(", ");
			else
				printf("\n");
		}
		x = (l + j) / 2;
		if (array[x] < value)
			l = x + 1;
		else if (array[x] > value)
			j = x - 1;
		else
			return (x);
	}
	return (-1);
}
