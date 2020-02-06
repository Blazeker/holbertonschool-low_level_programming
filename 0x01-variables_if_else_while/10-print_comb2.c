#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n = '0';
	int s = '0';

	while (n <= '9')
	{
	while (s <= '9')
	{
	putchar(n);
	putchar(s);
	if (n == '9' && s == '9')
	{
		putchar('\n');
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	s++;
	}
	if (s >= '9')
	{
		s = '0';
	}
		n++;
	}
	putchar('\n');
	return (0);
}
