#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - A function
 * @ac : arguments
 * @av : an array
 * Return: an array
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len += ac;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
