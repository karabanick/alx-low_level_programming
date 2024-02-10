#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed to flip
 * from one number to another
 * @n: input
 * @m: input
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count = 0;

	res = n ^ m;
	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
