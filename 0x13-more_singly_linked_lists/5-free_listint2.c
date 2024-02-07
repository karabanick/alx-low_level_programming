#include "lists.h"

/**
 * free_listint2 - freeing a list and setting the head to NULL
 * @head: start of list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}

	*head = NULL;
}
