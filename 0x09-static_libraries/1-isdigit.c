#include "main.h"

/**
 * _isdigit - Function that checks for a digit ( zero through nine)
 * @c: Character
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
