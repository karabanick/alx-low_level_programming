#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 * then in uppercase
 * Return: 0 (Successful)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
