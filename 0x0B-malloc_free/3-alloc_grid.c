#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a two dimension array
 * @width: size of an elements of array
 * @height: size of the entire array
 * Return: result
 */

int **alloc_grid(int width, int height)
{
	int **aa;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	aa = (int **)malloc(sizeof(int *) * height);

	if (aa == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		aa[i] = (int *)malloc(sizeof(int) * width);

		if (aa[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(aa[j]);
			}
			free(aa);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			aa[i][j] = 0;
		}
	}

	return (aa);
}
