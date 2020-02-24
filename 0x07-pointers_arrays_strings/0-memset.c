#include "holberton.h"

/**
**_memset - Return an pointer
*@s : an pointer
*@b : an character
*@n : an intt
*Return: an pointer
*/

char *_memset(char *s, char b, unsigned	int n)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0' && i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
