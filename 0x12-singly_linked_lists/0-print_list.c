#include "lists.h"
#include <stdio.h>

/**
 * print_list - printing the elements of a list
 * @h: pointer to a list
 * Return: number of node / size of node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	size_t len;

	while (h != NULL)
	{
		len = 0;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			while (h->str[len] != '\0')
				len++;
			printf("[%lu] %s\n", len, h->str);
		}
		count++;
		h = h->next;
	}

	printf("-> %lu elements\n", count);
	return (count);
}
