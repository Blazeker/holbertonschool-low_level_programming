#include <stdio.h>

/**
 * main - prints its name + \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */


int main (__attribute__((unused)) int argc, char *argv[])
{
	printf("%s%s", argv[0], "\n");
	return (0);
}
