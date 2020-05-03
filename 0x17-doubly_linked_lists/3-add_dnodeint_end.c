#include "lists.h"
#include <stdlib.h>

/**
 * create_lnode - creates a new double linked
 * @n: data to add
 * Return: pointer to newly
 */

dlistint_t *create_lnode(const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	return (new_node);
}

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked
 * @head: double pointer to the head
 * @n: data to add
 * Return: pointer to new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	new_node = create_lnode(n);
	if (!new_node)
		return (NULL);

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		new_node->prev = temp;
		temp->next = new_node;

		return (new_node);
	}
	return (NULL);
}
