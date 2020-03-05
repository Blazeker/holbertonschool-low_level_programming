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

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	return (s);
}
