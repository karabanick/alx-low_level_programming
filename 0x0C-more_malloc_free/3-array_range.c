#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: result
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
