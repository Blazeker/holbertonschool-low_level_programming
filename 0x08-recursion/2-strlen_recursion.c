#include "holberton.h"

/**
 * _strlen_recursion - count the lenght of a string recursively
 * @s : an string
 * Return: an int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	i = 1;
	i += _strlen_recursion(s + 1);
	return (i);
}
