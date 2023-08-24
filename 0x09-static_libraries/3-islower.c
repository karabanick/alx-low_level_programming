#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: Input
 * Return: 0 Success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
