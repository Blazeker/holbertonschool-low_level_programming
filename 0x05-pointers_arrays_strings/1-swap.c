#include "holberton.h"

/**
 * swap_int - Swap the int of 2 pointers
 * @a : int
 * @b : int
 * Return : 0
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
