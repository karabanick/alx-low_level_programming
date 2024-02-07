#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a node at a given index
 * @head: start of list
 * @idx: position where node is inserted
 * @n: node to be added
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int k;

	k = 0;
	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (current != NULL && k < idx - 1)
	{
		current = current->next;
		k++;
	}

	if (current == NULL || k != idx - 1)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;
	return (new);
}
