#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer area
 * @b: Contant
 * @n: bytes
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
