#include <stdio.h>

int main(void)
{
	long int c = 1;
	long int s = 2;
	long int cont = 0;
	int ss = 0;
	while(ss < 96)
	{
		cont = c + s;
		c = s;
		s = cont;
		printf("%li%s", cont, ", ");
		ss++;
	}
	printf("\n");
}
