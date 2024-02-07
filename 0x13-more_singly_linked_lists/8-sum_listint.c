#include "lists.h"

/**
 * sum_listint - getting the sum of all the data(n) of a list
 * @head: start of list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current = head;

	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
