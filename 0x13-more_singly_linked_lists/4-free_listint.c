#include "lists.h"

/**
 * free_listint - freeing a list
 * @head: pointer to list head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
