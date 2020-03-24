#include "lists.h"

/**
*add_nodeint - add a node
*@head: pointer to head element of list
*@n: the n to insert
*Return: the node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	*head = malloc(sizeof(listint_t));
	(*head)->n = n;
	(*head)->next = new;
	return (*head);
}
