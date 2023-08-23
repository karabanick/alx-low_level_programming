#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: First string
 * @src: Second string
 * @n: bytes
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
