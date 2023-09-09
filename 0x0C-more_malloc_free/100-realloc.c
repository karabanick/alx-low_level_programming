#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory block
 * @ptr: pointer to old size memory
 * @old_size: first memory
 * @new_size: second memory
 * Return: result
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptr2;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);

		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
		return (NULL);

	if (new_size > old_size)
	new_size = old_size;

	for (i = 0; i < new_size; i++)
		*((char *)ptr2 + i) = *((char *)ptr + i);

	free(ptr);
	return (ptr2);
}
