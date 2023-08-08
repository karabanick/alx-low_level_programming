#include "main.h"

/**
 * main - program that prints its name
 * can be renamed without recompiling
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int k;

	if (argc > 0)
	{
		for (k = 0; "my name is "[k] != '\0'; k++)
		{
		_putchar("my name is "[k]);
		}
		for (k = 0; argv[0][k] != '\0'; k++)
		{
		_putchar(argv[0][k]);
		}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
	return (0);
}
