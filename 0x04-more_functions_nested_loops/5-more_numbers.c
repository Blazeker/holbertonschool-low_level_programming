#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0;
	int cont = 0;

	for (; cont <= 10; cont++)
	{
		for (; i <= 14; i++)
		{
			if (i >= 10)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		i = 0;
		_putchar('\n');
	}
}
