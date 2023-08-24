#include <stdio.h>
#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: String
 * @needle: Characters to be checked in string
 * Return: Pointer to beginning of located string, NULL if otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*j != '\0' && *i == *j)
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
