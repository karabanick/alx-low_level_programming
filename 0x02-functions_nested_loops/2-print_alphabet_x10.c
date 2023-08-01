#include "main.h"

/**
 * print_alphabet_x10 - Function that prints the alphabet ten times
 * followed by a new line
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;
	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	i++;
	}
}
