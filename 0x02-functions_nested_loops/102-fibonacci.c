#include <stdio.h>

/**
 * main - Print the 50 first numbers of fibonacci
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum;
	int cont = 0;
	printf("%d%s", 1, ", ");
	printf("%d%s", 2, ", ");
	while (cont < 48)
	{
		sum = a + b;
		if (cont == 47)
		{
		printf("%li", sum);
		}
		else
		{
		printf("%li%s", sum, ", ");
		a = b;
		b = sum;
		}
		cont++;
	}
	printf("\n");
	return (0);
}
