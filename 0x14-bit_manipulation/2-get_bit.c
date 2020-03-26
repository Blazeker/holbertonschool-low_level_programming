#include "holberton.h"

/**
 * get_bit - Count how may bites need to be to flip
 * @n: an unsigned int
 * @index: an unsigned int
 * Return: the number of flips
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n >>= 1;
	if (i > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	return (n & 1);
}
