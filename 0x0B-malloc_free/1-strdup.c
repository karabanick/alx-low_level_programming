#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Function that returns a pointer to a newly allocated
 * space in memory
 * @str: String
 * Return: NULL if str=NULL otherwise, pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *aaa;
	int l;
	int k;

	k = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	aaa = malloc(sizeof(char) * (l + 1));

	if (aaa == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k]; k++)
	{
		aaa[k] = str[k];
	}
	return (aaa);
}
