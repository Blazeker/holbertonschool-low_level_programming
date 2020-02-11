#include "holberton.h"

/**
* print_last_digit - check the code for Holberton School students.
* @n : int
* Return: Always 0.
*/


int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar (n + '0');
		return (n);
	}
	else if (n == 0)
	{
		_putchar (n + '0');
		return (n);
	}
	else if (n < 10)
	{
		n = n % 10;
		n = n * -1;
		_putchar(n + '0');
		return (n);
	}
	return (0);
}
