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
	int i, j, k = 0;
	char *s;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
		}
	}
	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}

	for(k = 0; k < j; k++)
	{
		s[k + i] = s[k];
	}
	s[i + j] = NULL;
	return (s);
}
