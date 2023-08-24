#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: Input string
 * Return: Result
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
