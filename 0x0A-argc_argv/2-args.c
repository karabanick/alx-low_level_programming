#include <stdio.h>

/**
 * main - Program that prints ll the arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
