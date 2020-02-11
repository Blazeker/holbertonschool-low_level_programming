#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int main(void)
	{
	char P[9] = "Holberton";
	int i;

	for (i = 0; i <= 8; i++)
	{
	_putchar(P[i]);
	}
	_putchar('\n');
	return (0);
	}
