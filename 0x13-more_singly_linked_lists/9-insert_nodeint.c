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
	unsigned int i = 0;
	listint_t *temp, *new;

	if (!*head || !head)
		return (NULL);
	temp = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = temp;
		*head = new;
		return (new);
	}
	new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
	while (temp)
	{
		if ((i + 1) == idx)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (*head);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
