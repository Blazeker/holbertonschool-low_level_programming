#include <stdio.h>

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while(i < argc)
	{
		printf("%s%s", argv[i], "\n");
		i++;
	}
	return (0);
}
