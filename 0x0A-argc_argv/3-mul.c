#include <stdio.h>

int atoi(char *argv);

/**
 * main - Entry Point
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1, n1, n2;
	if(argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[i]);
	n2 = atoi(argv[i + 1]);
	printf("%d\n", n1 * n2);
	return (0);
}
