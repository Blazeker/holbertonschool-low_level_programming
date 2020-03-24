#include "lists.h"
#include <stdio.h>

/**
*print_listint - Print the elements of the list
*@h: pointer to head element of list
*Return: the number of elements printed
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
