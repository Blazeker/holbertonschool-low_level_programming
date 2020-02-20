#include "holberton.h"

/**
 * leet - Replace
 * @s : An array
 * Return: an array
 */

char *leet(char *s)
{
	int j = 0;
	int i = 0;
	char n1[] = "aeotl";
	char n2[] = "AEOTL";
	char se[] = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; se[j] != '\0'; j++)
		{
			if (n2[j] == s[i] || n1[j] == s[i])
			{
				s[i] = se[j];
			}
		}
		i++;
	}
	return (s);
}



