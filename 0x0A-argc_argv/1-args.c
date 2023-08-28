#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	(void)argv;
	argc = argc - 1;
	printf("%d\n", argc);

	return (0);
}
