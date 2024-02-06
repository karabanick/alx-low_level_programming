#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that printd all elements of a list
 * the list contains an int and node
 * @h: pointer to input list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
