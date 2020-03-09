#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print
 * @d: struct name
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = NILL;
	if (d->owner == NULL)
		d->owner = NILL;
	printf("Name: %s\NAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner)
}
