#include "lists.h"

/**
 * add_nodeint_end - adding a new node at end of list
 * @head: pointer to start of list
 * @n: pointer to new node
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_new;
	listint_t *temp;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;

	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = node_new;
	return (node_new);
}
