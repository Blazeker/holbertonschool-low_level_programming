#include "holberton.h"
#include <stdlib.h>

/**
 * set_bit - Count how may bites need to be to flip
 * @n: an unsigned int
 * @index: an unsigned int
 * Return: the number of flips
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
