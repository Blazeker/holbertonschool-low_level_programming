#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concat 2 strings
 * @s1 : an array
 * @s2 : an array
 * Return: an array
 */

char *str_concat(char *s1, char *s2)
{
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *s;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (i = 0; i <= *s1; i++)
	{
	}

	for (j = 0; j <= *s2; j++)
	{
	}

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	while (*s1)
	{
		s[k] = *s1;
		k++;
		s1++;
	}

	while (*s2)
	{
		s[k] = *s2;
		k++;
		s2++;
	}
	return (array);
}
