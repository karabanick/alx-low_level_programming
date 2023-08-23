#include "main.h"

/**
 * _strcat - Function that concantates two string
 * @dest: First string
 * @src: Second string
 * Return: Pointer to new string
 */

char *_strcat(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
