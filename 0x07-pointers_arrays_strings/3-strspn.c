#include "holberton.h"

/**
 * _strspn - Return an pointer
 *@s : an pointer
 *@accept : an character
 *Return: an pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int p = 0;
	unsigned int d = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (p = 0; s[p] != '\0'; p++)
		{
			if (s[p] == ' ')
				break;
			if (s[p] == accept[i])
				d++;
		}
	}
	return (d);
}
