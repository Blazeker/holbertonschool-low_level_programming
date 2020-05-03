#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly linked
 * @h: head of doubly linked
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
