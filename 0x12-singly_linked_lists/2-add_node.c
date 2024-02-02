#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adding a new node at beginning of list
 * @head: pointer to the beginning of the list
 * @str: pointer to the input string
 * Return: addr of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_2;

	if (str == NULL)
		return (NULL);

	node_2 = malloc(sizeof(list_t));

	if (node_2 == NULL)
		return (NULL);

	node_2->str = strdup(str);

	if (node_2->str == NULL)
	{
		free(node_2);
		return (NULL);
	}

	node_2->next = *head;
	*head = node_2;

	return (node_2);
}
