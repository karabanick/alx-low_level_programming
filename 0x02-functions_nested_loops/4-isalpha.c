#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: function parameter(input)
 * Return: 1 if letter(lowercase or uppercase), 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
	}
}
