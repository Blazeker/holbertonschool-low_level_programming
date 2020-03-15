#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - print
 * @name: struct name
 * @age: float
 * @owner: char
 * Return: an pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;
	unsigned int i, len1 = 0, len2 = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		len1++;
	for (i = 0; owner[i]; i++)
		len2++;
	new_name = malloc(sizeof(char) * len1 + 1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * len2 + 1);
	if (new_owner == NULL)
	{
		free(d);
		free(new_name);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';
	for (i = 0; owner[i]; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;
	return (d);
}
