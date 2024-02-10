#include "main.h"

/**
 * set_bit - function that sets a bit to 1 at a given index
 * @n: input
 * @index: index of a bit
 * Return: 1 if successful -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;

	*n |= mask;/*setting the bit to 1 at given index (OR) operator*/

	return (1);
}
