#include "main.h"

/**
 * _strcpy - Function that copies a string pointed to a pointer
 * @dest: Input string pointer
 * @src: Another string pointer
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
