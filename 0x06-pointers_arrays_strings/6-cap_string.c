#include "holberton.h"

/**
 * cap_string - capitalize the string
 * @s : an array
 * Return: an array
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char se[] = " \t\n,;!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
		str[i] = str[i] - 32;
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
