#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n : int
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i = 0;
	int cont = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (cont = 0; cont < i; cont++)
			{
			_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
