#include "lists.h"

/**
 * get_dnodeint_at_index - gets a doubly linked
 * @head: pointer to head of double linked
 * @index: index of node to find
 * Return: pointer to node if found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
