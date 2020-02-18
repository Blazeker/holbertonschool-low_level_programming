#include "holberton.h"

/**
 * *_strcpy - Return the copy of an string
 * @dest : an array
 * @src : an array
 * Return: an array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
	return (dest);
}
