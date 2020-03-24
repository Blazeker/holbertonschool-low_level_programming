#include "lists.h"

/**
*free_listint - free the element of the list
*@head: pointer to head element of list
*/

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
