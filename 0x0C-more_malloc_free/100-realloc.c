#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Realocate the memory
 * @ptr : an array
 * @old_size : the old memory
 * @new_size : the new memory
 * Return: The new array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *p;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	s = malloc(new_size);
	p = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		s[i] = p[i];
	free(ptr);
	return (s);
}
