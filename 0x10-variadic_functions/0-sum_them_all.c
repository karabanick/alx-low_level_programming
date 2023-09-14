#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function that returns sum of its parameters
 * @n: parameters
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	int num;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		sum += num;
	}
	va_end(args);

	return (sum);
}

