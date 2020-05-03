#include "lists.h"

/**
 * sum_dlistint - sums a doubly linked
 * @head: pointer to head of DLL
 * Return: sum of all elements of the DLL
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
