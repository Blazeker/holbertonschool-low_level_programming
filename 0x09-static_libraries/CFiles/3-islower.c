#include "holberton.h"
#include <ctype.h>


/**
 * _islower - check the code for Holberton School students.
 * @c: int
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 98 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
