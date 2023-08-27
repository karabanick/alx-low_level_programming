#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	argc = 1;

	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
