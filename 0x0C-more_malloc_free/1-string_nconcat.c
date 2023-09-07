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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *ptr, *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	con = ptr;

	for (i = 0; i < len1; i++)
		*ptr++ = s1[i];
	for (j = 0; j < n; j++)
		*ptr++ = s2[j];

	*ptr = '\0';

	return (con);
}
