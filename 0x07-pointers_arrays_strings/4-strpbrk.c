#include "holberton.h"

/**
 * *_strpbrk - Return an pointer
 *@s : an pointer
 *@accept : an character
 * Return: an pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *d = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				d = &s[i];
				return(d);
			}
		}
	}
	return (d);
}
