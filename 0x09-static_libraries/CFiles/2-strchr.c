#include "holberton.h"

/**
 * _strchr - Return an pointer
 * @s : an pointer
 * @c : an character
 * Return: an pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
