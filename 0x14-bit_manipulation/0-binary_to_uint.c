#include "holberton.h"

/**
 * binary_to_uint - Count how may bites need to be to flip
 * @b: an unsigned int
 * Return: the number of flips
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
