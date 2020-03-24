#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints the elements in linked list
 * @h: head of listint_t type
 * Return: size_t, number of nodes. Exits with 98 on failure
 */

size_t print_listint_safe(const listint_t *h)
{
	size_t n_nodes = 0;
	const listint_t *temp = NULL, *loop_node= NULL;

	temp = h;
	if (!h)
		exit(98);
	while (temp)
	{
		if (h->next == temp && n_nodes > 2)
		{
			loop_node = temp;
			printf("loop node: [%p] %d\n", (void *)loop_node, loop_node->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		n_nodes++;
	}
	return (n_nodes);
}
