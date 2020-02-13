#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
