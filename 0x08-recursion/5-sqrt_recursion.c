#include "main.h"

/**
 * random_sqrt_recursion - Function that recurses to find natural square root
 * @n: Input
 * @k: iterator
 * Return: Result
 */

int random_sqrt_recursion(int n, int k)
{
	if (k * k == n)
	{
		return (k);
	}
	else if (k * k > n)
	{
		return (-1);
	}
	return (random_sqrt_recursion(n, k + 1));
}

/**
 * _sqrt_recursion - Function that returns natural square root on a number
 * @n: Input
 * Return: Result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (random_sqrt_recursion(n, 0));
}
