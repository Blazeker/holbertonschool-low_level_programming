#include "lists.h"
#include <stdlib.h>

/**
*free_listint2 - free the list of ints
*@head: pointer to head element of list
*/

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
