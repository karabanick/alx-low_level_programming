#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: input format c(char), i(int), f(float), s(char *)
 * Return: result
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *j;
	char separator = ',';
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			printf("%c ", separator);

	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
		case 's':
			j = va_arg(args, char *);
			if (j == NULL)
				j = "(nil)";
			printf("%s", j);
			break;
	}
	i++;
	}

	va_end(args);
	printf("\n");
}
