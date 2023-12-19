#include <stdio.h>

/**
 * main - program to print hexadecimal numbers (base 16)
 * followed by a new line using f/n putchar
 * Return: 0 (success)
 */

int main(void)
{
	int k;

	for (k = 0; k < 16; k++)
	{
		if (k < 10)
		{
			putchar('0' + k);
		}
		else
		{
			putchar('a' + k - 10);
		}
	}
	putchar('\n');

	return (0);
}
