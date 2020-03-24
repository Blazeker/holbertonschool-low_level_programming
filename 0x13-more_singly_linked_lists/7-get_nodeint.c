#include "lists.h"

/**
*get_nodeint_at_index - get the index node
*@head: pointer to head element of list
*@index: the node to get
*Return: the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
