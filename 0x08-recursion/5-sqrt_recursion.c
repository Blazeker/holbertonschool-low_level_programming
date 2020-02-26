#include "holberton.h"
/**
 * sqrt2 - The return
 * @n : an int
 * @i : an int
 * Return: an int
 */

int sqrt2(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (n < (i * i))
	{
		return (-1);
	}
	else
	{
		return (sqrt2(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Great thing
 * @n : an int
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	int i = 1;
	int s;

	s = sqrt2(n, i);
	return (s);
}
