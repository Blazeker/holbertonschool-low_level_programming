#include "holberton.h"

/**
 * _strchr - Return an pointer
 * @s : an pointer
 * @c : an character
 * Return: an pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &(*(s + i));
			break;
		}
	}
	if (s[i] == '\0')
	{
		return ('\0');
	}
	else
	{
	return (p);
	}
}
