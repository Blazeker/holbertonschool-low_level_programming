#include "holberton.h"
#include <stdlib.h>

/**
 * clear_bit - Count how may bites need to be to flip
 * @n: an unsigned int
 * @index: an unsigned int
 * Return: the number of flips
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (n == NULL || index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	mask = 1 << index;
	*n = (*n & ~mask);
	return (1);
}
