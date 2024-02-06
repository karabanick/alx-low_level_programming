#include "lists.h"

/**
 * add_nodeint - function that adds new node at list beginning
 * @head: pointer to list head
 * @n: new node
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;

	node_new->next = *head;

	*head = node_new; /*de-referencing the pointer*/

	return (node_new);
}
