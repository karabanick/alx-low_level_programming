#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that finds the sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *ptr;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		for (j = 0; ptr[j] != '\0'; j++)
		{
			if (ptr[j] < '0' || ptr[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(ptr);
	}
	printf("%d\n", sum);

	return (0);
}
