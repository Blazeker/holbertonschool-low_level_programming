#include "holberton.h"

/**
 * times_table - print all multiplications on a table
 */


void times_table(void)
{
	int c = 0;
	int s = 0;

	for (c = 0; c <= 9; c++)
	{
		for (s = 0; s <= 9; s++)
		{
			if ((c * s) >= 10)
			{
				if ((c * s) > 8)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(((c * s) / 10) + '0');
				_putchar(((c * s) % 10) + '0');
				}
				else
				{
				_putchar(((c * s) / 10) + '0');
				_putchar(((c * s) % 10) + '0');
				}
			}
			else
			{
				if (s <= 9 && s >= 1)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((c * s) + '0');
				}
				else
				{
				_putchar((c * s) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
