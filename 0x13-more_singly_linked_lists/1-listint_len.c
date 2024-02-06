#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list
 * with int datatype
 * @h: pointer to the input list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
