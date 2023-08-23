#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: First string
 * @src: Second string
 * @n: Number of bytes
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
