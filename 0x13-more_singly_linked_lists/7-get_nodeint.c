#include "lists.h"

/**
 * get_nodeint_at_index - getting the nth node of a list
 * @head: start of list
 * @index: index of the node
 * Return: nth node or NULL if node is absent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *current = head;

	k = 0;
	while (current != NULL && k < index)
	{
		current = current->next;
		k++;
	}

	if (k == index && current != NULL)
		return (current);
	else
		return (NULL);
}
