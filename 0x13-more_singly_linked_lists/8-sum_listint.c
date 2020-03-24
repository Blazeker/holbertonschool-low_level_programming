#include "lists.h"

/**
*sum_listint - Sum all the elements of the list
*@head: pointer to head element of list
*Return: the sum of the elements
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
