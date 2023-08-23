#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Difference
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
	return (0);
}
