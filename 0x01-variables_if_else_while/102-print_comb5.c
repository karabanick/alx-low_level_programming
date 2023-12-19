#include <stdio.h>

/**
 * print_two_num - prototype function to print two numbers
 * @n: function parameter
 */

void print_two_num(int n)
{
	putchar('0' + n / 10);
	putchar('0' + n % 10);
}

/**
 * main - program to print all possible combinations of two two-digit numbers
 * number 0 - 99, separated by a spece then comma and space
 * Return: 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			print_two_num(i);
			putchar(' ');
			print_two_num(j);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
