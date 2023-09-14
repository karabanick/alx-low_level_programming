#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints a string
 * followed by a new line
 * @separator: string to be printed between strings
 * @n: input strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char *);

		if (j != NULL)
		{
			printf("%s", j);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
