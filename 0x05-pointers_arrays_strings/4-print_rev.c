#include "holberton.h"

/**
 * print_rev - Print on reverse the string coming
 * @s : an array
 */

void print_rev(char *s)
{
	int i = '\0';
	int cont;

	for (i = 0; s[i] !=  '\0'; i++)
	{
		cont++;
	}
	for (; cont >= 0; cont--)
	{
		_putchar(s[cont]);
	}
	_putchar('\n');
}
