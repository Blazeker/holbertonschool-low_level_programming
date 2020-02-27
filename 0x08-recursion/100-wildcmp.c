#include "holberton.h"

/**
 * recursive_check - checks for wild cards 
 * @s1: an string
 * @s2: an string
 * @wildC: an int
 * Return: 0, 1 or -1
 */

int recursive_check(char *s1, char *s2, int wildC)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
		return (recursive_check(s1, s2 + 1, ++wildC));
	else if (*s1 != *s2 && wildC > 0)
	{
		if (!*s1)
			return (0);
		return (recursive_check(s1 + 1, s2, wildC));
	}
	else if (*s1 == *s2 && wildC == 0)
		return (recursive_check(s1 + 1, s2 + 1, 0));
	else if (*s1 == *s2 && wildC > 0)
	{
		if (!recursive_check(s1 + 1, s2 + 1, 0))
			return (recursive_check(s1 + 1, s2, wildC));
		return (recursive_check(s1 + 1, s2 + 1, wildC));
	}
	else if (*s1 != *s2 && wildC == 0)
		return (0);
	return (-1);
}

/**
 * wildcmp - Compares two strings
 * @s1 : An string
 * @s2 : An string
 * Return: An int
 */

int wildcmp (char *s1, char *s2)
{
	int i = 0;

	return(recursive_check(s1, s2, i));
}
