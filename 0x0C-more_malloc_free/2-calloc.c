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
	char *s;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (0);
	s = malloc(nmemb * size);
	if (s == 0)
		return (0);
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
