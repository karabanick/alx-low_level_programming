#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @k: function parameter
 * Return: result
 */

int print_last_digit(int k)
{
	int last_num;

	last_num = k % 10;

	if (last_num < 0)
	{
		last_num = -last_num;
	}
	_putchar(last_num + '0');

	return (last_num);
}
