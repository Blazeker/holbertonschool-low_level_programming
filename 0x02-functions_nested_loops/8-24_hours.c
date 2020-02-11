#include "holberton.h"

/**
* jack_bauer - check the code for Holberton School students.
*
* Return: Always 0.
*/



void jack_bauer(void)
{
	int c = 0;
	int s = 0;

	for (c = 0; c < 24; c++)
	{
		for (s = 0; s <= 59; s++)
		{
			if (s < 10 && c < 10)
			{
			_putchar('0');
			_putchar(c + '0');
			_putchar(':');
			_putchar('0');
			_putchar(s + '0');
			}
			else
			{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
