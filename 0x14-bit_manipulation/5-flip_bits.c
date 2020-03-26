#include "holberton.h"
#include <stdlib.h>

/**
 * flip_bits - Count how may bites need to be to flip
 * @n: an unsigned int
 * @m: an unsigned int
 * Return: the number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ret, i;

	for (i = 0, ret = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((n & 1) != (m & 1))
			ret++;
		n >>= 1, m >>= 1;
	}
	return (ret);
}
