#include "main.h"

/**
 * _strncat - Function that concantates two strings
 * @dest: First string
 * @src: Second string
 * @n: Number of bytes from src
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int k = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';
	return (dest);
}
