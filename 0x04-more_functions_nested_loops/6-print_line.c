#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n : int
 * Return: Always 0.
 */

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
