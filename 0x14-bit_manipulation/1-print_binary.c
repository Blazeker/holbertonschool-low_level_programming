#include "holberton.h"

/**
 * print_binary - Count how may bites need to be to flip
 * @n: an unsigned int
 * Return: the number of flips
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
