#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 11;

	while (i < 10) /* There are a infinite loop because the i isn't increasing */ 
	{
	        putchar(i); 
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
