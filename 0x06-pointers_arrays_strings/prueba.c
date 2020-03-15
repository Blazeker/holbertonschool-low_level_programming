#include <stdio.h>

int main(void)
{
	int i = 0;
	char *s;
	char p[] = "Hello";

	s = p;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		putchar(*(s + i));
	}
	return (0);
}
