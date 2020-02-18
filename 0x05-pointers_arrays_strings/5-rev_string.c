#include "holberton.h"

/**
 * rev_string - Reverse the coming string
 * @s : An array
 */

void rev_string(char *s)
{
	int cont = 0;
	int i = 0;
	char b;

	for (i = 0; s[i] != '\0'; i++)
	{
		cont++;
	}

	i = 0;

	for (; cont - 1 > 0 && i != cont - 1; cont--)
	{
		b = s[i];
		s[i] = s[cont - 1];
		s[cont - 1] = b;
		i++;
	}
}
