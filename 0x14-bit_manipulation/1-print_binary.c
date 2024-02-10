#include "main.h"

/**
 * print_binary - printing the binary representation of a number, using
 * right shift bitwise operator with recursion.
 * @n: input number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');/*n & 1 - extracts LSB of the number n*/
}
