#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: Input string
 * @s2: second input string
 * @n: number of bytes
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
		ptr[i] = s2[j];
	}
	j = 0;

	ptr[i] = '\0';

	return (ptr);
}
