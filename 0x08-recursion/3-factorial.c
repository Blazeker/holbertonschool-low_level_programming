#include "holberton.h"

/**
 * factorial - do a factorial recursively
 * @n : an int
 * Return: an int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
