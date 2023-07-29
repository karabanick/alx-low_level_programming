#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 * except letters q and e
 * Return: 0 (Successful)
 */

int main(void)
{
	char d;

	d = 'a';
	while (d <= 'z')
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');

	return (0);
}
