#include "holberton.h"
#include <stdio.h>

/**
 * natural_numbers - Print all multiples of 3 and 5 until 1024
 */

void natural_numbers(void)
{
	int c;
	int sum = 0;

	for (c = 3; c < 1024; c++)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
		sum = c + sum;
		}
	}
	printf("%d%s", sum, "\n");
}
