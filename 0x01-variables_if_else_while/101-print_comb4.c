#include <stdio.h>

/**
 * main - program to print all possible combinations of three digits
 * separated by comma and space
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			for (k = j + 1; k < 10; ++k)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
