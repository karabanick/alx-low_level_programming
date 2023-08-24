#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: Input string
 * Return: 0 Success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
