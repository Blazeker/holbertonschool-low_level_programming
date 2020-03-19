#include "lists.h"

/**
*add_node - print all elements of list
*@head: pointer to head element of list
*@str: str to print
*Return: Elements of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	(*head)->len = i;
	if (str != NULL)
	{
		(*head)->str = strdup(str);
		if ((*head)->str == NULL)
		{
			free(*head);
			return (NULL);
		}
	}
	else
		(*head)->str = NULL;
	(*head)->next = new_node;
	return (*head);
}
