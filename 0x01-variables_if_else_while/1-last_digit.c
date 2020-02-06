#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
 */
int main(void)
{
	int s;
	char last[] = "Last digit of";

	srand(time(0));
	s = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, s, s % 10);
	if (s % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (s % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);

}
