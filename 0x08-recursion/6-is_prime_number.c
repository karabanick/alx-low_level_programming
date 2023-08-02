#include "main.h"

/**
 * is_prime_number_divisor - divides number to check if prime or not
 * @n: Input
 * @k: Divisor
 * Return: Result
 */

int is_prime_number_divisor(int n, int k)
{
	if (k <= 1)
	{
		return (1);
	}
	if (n % k == 0)
	{
		return (0);
	}
	return (is_prime_number_divisor(n, k - 1));
}

/**
 * is_prime_number - Function that checks if number is prime or not
 * @n: Input
 * Return: Result
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_divisor(n, n - 1));
}
