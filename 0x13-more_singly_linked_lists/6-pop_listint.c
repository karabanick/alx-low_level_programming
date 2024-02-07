#include "lists.h"

/**
 * pop_listint - deleting the head node of a list
 * @head: pointer to start of list
 * Return: removed head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	data = 0;
	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head; /* to store the head of the node */
	data = tmp->n; /* to store data if the head node in temp list */

	*head = tmp->next; /* to update head pointer */

	free(tmp);

	return (data);
}
