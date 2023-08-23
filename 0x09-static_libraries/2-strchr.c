#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: Pointer to the string
 * @c: Character
 * Return: Pointer to character c, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] >= '\0')
	{
		if (s[j] == c)
		{
			return ((char *)&s[j]);
		}
		j++;
	}
	return (NULL);
}
