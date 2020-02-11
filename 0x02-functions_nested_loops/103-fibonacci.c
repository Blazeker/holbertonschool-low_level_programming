#include <stdio.h>


/**
* main - Print the 50 first numbers of fibonacci
* Return: 0
*/


int main(void)
{
	long int c = 1;
	long int s = 2;
	long int sum = 0;
	long int cont = 2;

	while (sum < 4000000)
	{
		sum = c + s;
		c = s;
		s = sum;
		if (sum % 2 == 0)
		{
		cont = sum + cont;
		}
	}
	printf("%li%s", cont, "\n");
	return (0);
}
