#include "holberton.h"

/**
 * *_memcpy - Return an pointer
 *@dest : an pointer
 *@src : an character
 *@n : an int
 *Return: an pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
