#include "lists.h"

/**
*add_nodeint_end - add node at the end
*@head: pointer to head element of list
*@n: the n to insert
*Return: the node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (temp)
		temp->next = new;
	else
		*head = new;
	return (new);
}
