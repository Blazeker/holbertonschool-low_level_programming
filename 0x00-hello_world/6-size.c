#include <stdio.h>
/**
 * main - Entry point
 * printf - print a message with a variable
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int in;
long lonl;
long long  lonll;
float fl;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lonl));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lonll));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
return (0);
}
