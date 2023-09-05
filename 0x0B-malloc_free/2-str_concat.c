#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * Return: NULL if empty string or on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	p = malloc((sizeof(char) * (len1 + len2 + 1)));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}
	p[len1 + len2] = '\0';

	return (p);
}
