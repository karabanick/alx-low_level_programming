#include "lists.h"

/**
 * list_len - printing the number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t cout = 0;

	while (h != NULL)
	{
		cout++;
		h = h->next;
	}

	return (cout);
}
