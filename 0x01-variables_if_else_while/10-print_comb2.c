#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
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
