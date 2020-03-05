#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - create the function calloc
 * @nmemb : number of memory
 * @size : size of the array
 * Return: an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i = 0;

	if (nmemb < 1 || size < 1)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	while (i < nmemb * size)
		s[i++] = '\0';
	return (s);
}
