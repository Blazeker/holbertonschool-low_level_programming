#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc
 * @b : an int
 * Return: An array
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
