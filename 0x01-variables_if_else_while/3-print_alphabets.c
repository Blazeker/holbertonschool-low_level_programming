#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int c = 'a';
	int d = 'A';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	while (d <= 'Z')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
