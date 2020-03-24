#include "lists.h"

/**
*pop_listint - delete the head of the list
*@head: pointer to head element of list
*Return: the n
*/

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp = (*head)->next;

	if (!*head)
		return (0);
	i = (*head)->n;
	free(*head);
	(*head) = temp;
	return (i);
}
