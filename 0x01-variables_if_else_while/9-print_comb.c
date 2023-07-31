#include <stdio.h>

/**
 * main - Program that prints possible combinations of single-digit numbers
 * separated by a comma and a space
 * Return: 0 (Successful)
 */

int main(void)
{
	int g;

	g = 0;
	for (g = 0; g <= 9; g++)
	{
		putchar(g + '0');
		putchar(',');
		putchar(' ');
	}
	putchar ('\n');
	return (0);
}
