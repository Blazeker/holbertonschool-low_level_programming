#include "holberton.h"

/**
 * rot13 - Decript rot 13
 * @s : array
 * Return: AN array
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char r1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; r2[j] != '\0'; j++)
		{
			if (s[i] == r2[j])
			{
				s[i] = r1[j];
				break;
			}
		}
	i++;
	}
	return (s);
}
