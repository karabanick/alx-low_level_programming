#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: input array
 * @size: size of the array
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int total_size = nmemb * size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(total_size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
