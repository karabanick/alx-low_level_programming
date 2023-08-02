#include "main.h"

/**
 * _pow_recursion - Function that raises a number to a power
 * @x: Input
 * @y: Power
 * Return: Result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
