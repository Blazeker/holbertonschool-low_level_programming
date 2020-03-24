#include "lists.h"

/**
*insert_nodeint_at_index - insert a node at the index
*@head: pointer to head element of list
*@idx: index to insert
*@n: int
*Return: the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *temp2;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	for (i = 0; temp->next && (i < (idx - 1)); i++, temp = temp->next)
		;
	if (idx > i + 1)
	{
		free(new);
		return (NULL);
	}
	temp2 = temp->next;
	temp->next = new;
	new->next = temp2;
	return (new);
}
