#include "holberton.h"

/**
 * _strncat - concatenar 2 strings
 * @dest : array
 * @src : array
 * @n : int
 * Return: array
 */

char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0;
	int s2 = 0;
	int i = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		s2++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		s1++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[s2 + i] = src[i];
	}
	dest[s2 + i] = '\0';
	return (dest);
}
