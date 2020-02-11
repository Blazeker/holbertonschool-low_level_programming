#include <stdio.h>

/**
* main - Print the 50 first numbers of fibonacci
* Return: 0
*/


int main(void)
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
