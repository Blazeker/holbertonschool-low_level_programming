#include <stdio.h>

/**
 * fibonacci50 - Print the 50 first numbers of fibonacci
 */

void main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum;
	int cont = 0;

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
}
