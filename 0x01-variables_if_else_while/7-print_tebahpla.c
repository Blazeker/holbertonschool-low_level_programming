#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char r = 'z';

	while (r >= 'a')
	{
	putchar(r);
	r--;
	}
	putchar('\n');
	return (0);
}
