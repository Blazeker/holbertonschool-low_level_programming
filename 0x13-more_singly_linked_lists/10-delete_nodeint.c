#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at the index
 * @head: head of list
 * @index: index to delete from
 * Return: 1 if success or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp2;

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp2 = temp->next;
		*head = temp2;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i + 1 == index)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
