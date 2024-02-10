#include "main.h"

/**
 * binary_to_uint - converting a binary number to an unsigned int
 * by checking if each character is 0 or 1. constructs unsigned int
 * by left shifting
 * @b: character string pointer
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res << 1) + (*b - '0');
		b++;
	}
	return (res);
}
