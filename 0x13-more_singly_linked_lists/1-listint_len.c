#include "lists.h"

/**
*listint_len - The len of the list
*@h: pointer to head element of list
*Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
