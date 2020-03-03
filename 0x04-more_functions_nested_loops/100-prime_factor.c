#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	int div = 2;
	int s = 1;

	while (s != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			n = n / div;
			if (n == 1)
				break;
		}
	}
	printf("%d", div);
	printf("\n");
	return (0);
}
