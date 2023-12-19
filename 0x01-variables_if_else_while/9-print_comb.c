#include <stdio.h>

/**
 * main - Program that prints possible combinations of single-digit numbers
 * separated by a comma and a space
 * Return: 0 (Success)
 */

int main(void)
{
	int g;

	for (g = 0; g <= 9; g++)
	{
		putchar(g + '0');

		if (g < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');

	return (0);
}
