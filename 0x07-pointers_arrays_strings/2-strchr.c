#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - Return an pointer
 * @s : an pointer
 * @c : an character
 * Return: an pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = NULL;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
		{
			p = &(*(s + i));
			break;
		}
	}
	return (p);
}
