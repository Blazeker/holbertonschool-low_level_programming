#include "holberton.h"

/**
 * *_strpbrk - Return an pointer
 *@s : an pointer
 *@accept : an character
 * Return: an pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	char *d = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			d = &(*(s + i - 1));
			break;
		}
	}
	return (d);
}
