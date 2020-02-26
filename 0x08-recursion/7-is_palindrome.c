#include "holberton.h"

/**
 * _strlen - know the len of a string
 * @s : an string
 * Return: an int
 */

int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}

/**
 * check - check the string palindrome
 * @s : an pointer
 * @i : an int
 * @len : an int
 * Return: an string
 */

int check(char *s, int i, int len)
{
	if (i >= len)
	{
		return (1);
	}
	if (s[len] == s[i])
	{
		return (check(s, len - 1, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - check the palindrome
 * @s : an pointer
 * Return: an int
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);
	int i = 0;

	return (check(s, i, len - 1));
}
