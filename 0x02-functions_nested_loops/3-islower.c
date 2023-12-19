#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: parameter for the function(input)
 * Return: 1 if lowercase, 0 if othersise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
	}
}
