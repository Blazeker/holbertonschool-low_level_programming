#include "lists.h"
#include <stdlib.h>

/**
 * create_node - creates a new double linked node with data
 * @n: data to add
 * Return: pointer
 */

dlistint_t *create_node(const int n)
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
 * add_dnodeint - adds a node to the head of a doubly linked list
 * @head: double pointer to the head
 * @n: number to add
 * Return: pointer to new element, NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	new_node = create_node(n);
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
		temp->prev = new_node;
		*head = new_node;
		new_node->next = temp;
		return (new_node);
	}

	return (NULL);
}
