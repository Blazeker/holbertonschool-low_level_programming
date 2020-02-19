#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - function main
 * Return: 0
 */

int main(void)
{
	int s, r;

	s = 0;
	r = 0;
	srand(time(NULL));

	while (2772 - s > 126)
	{
		r = rand() % 93 + 32;
		putchar(r);
		s = s + r;
	}
	putchar(2772 - s);

	return (0);
}
