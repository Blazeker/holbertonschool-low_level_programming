#include "holberton.h"

/**
 * puts_half - Print the half of the string
 * @str : An array
 */

void puts_half(char *str)
{
	int i = 0;
	int cont = 0;
	int half = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		cont++;
	}
	if (cont % 2 != 0)
	{
		half = (cont - 1) / 2;
		half++;
	}
	else
	{
		half = cont / 2;
	}
	while (half != cont)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
