#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
	putchar(n);
	if (n != '9')
	{
	putchar(',');
	putchar(' ');
	}
	n++;
	}
	putchar('\n');
	return (0);
}
