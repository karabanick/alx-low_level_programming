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

	i = 0;
	while (i <= 9)
	{
		j = i + 1;

		while (j <= 9)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				j++;
			}
		}
	i++;
	}
	putchar('\n');
	return (0);
}
