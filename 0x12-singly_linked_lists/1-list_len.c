#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*list_len - print all elements of list
*@h: pointer to head element of list
*Return: Elements of the list
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h != NULL; i++)
		h = h->next;
	return (i);
}
