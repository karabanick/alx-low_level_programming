#include "lists.h"

/**
 * delete_nodeint_at_index - deleting a node at an index
 * @head: start of the list
 * @index: position of the node
 * Return: 1 (Success) -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	previous = *head;
	current = (*head)->next;

	for (k = 1; current != NULL && k < index; k++)
	{
		previous = *head;
		current = (*head)->next;
	}

		if (current == NULL)
			return (-1);

		previous->next = current->next;
		free(current);

		return (1);
}
