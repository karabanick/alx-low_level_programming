#include "main.h"

/**
 * _print_rev_recursion - Function that prints a reversed string
 * @s: Pointer to a string
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s +1);
	_putchar(*s);
}
