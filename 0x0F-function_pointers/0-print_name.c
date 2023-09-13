#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to name
 * @f: function pointer
 * Return: result
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
