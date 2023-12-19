#include <stdio.h>

/**
 * main - program to print all numbers base 10
 * using putchar, followed by new line
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
