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

	while (h != NULL)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (int)_strlen(h->str), h->str);
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * _strlen - function to calculate length of a string
 * @str: input string
 * Return: length
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
