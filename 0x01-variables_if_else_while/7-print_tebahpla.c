#include <stdio.h>

/**
 * main - program to print lowercase alphabet in reverse
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
