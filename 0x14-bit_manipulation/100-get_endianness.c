#include "main.h"

/**
 * get_endianness - checking the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
