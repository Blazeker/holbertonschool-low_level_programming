#include "holberton.h"

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
				if (s != 9)
				{
				_putchar(' ');
				_putchar(',');
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
				if (s != 9)
				{
				_putchar((c * s) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
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
