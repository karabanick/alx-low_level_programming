#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * and initializes the array with a specific char
 * @c: Character of array
 * @size: size of array
 * Return: NULL is size is 0 otherwise, pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		str[k] = c;
	}
	return (str);
}
