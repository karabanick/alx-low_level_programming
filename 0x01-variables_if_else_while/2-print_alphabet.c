#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 (Successful)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
