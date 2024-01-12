#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for given amount
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success, 1 if Error
 */

int main(int argc, char *argv[])
{
	int cents;
	int coin_val[] = {25, 10, 5, 2, 1};
	int num_coin = sizeof(coin_val) / sizeof(coin_val[0]);
	int coin_count = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coin; ++i)
	{
		while (cents >= coin_val[i])
		{
			cents -= coin_val[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);

	return (0);
}
