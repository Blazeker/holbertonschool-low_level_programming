#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n : int
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (_putchar('+'));
		return (1);
	}
	else if (n == 0)
	{
		return (_putchar('0'));
		return (0);
	}
	else
	{
		return (_putchar('-'));
		return (-1);
	}
}
