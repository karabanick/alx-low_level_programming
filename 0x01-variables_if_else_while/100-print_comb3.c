#include <stdio.h>

/**
 * main - Program that prints different possible combinations of two digits
 * separated by a comma and a space
 * numbers must be different
 * Return: 0 (Successful)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
