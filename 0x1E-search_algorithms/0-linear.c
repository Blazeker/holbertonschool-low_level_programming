#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value i with linear search algor
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search
 * Return: The search of the first index found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
