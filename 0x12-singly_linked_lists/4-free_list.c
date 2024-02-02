#include "lists.h"
#include <stdlib.h>

/**
 * free_list - freeing memory allocated to lists
 * @head: pointer to head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
