#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sign_check - function that check whether number is positive
 * @str: input number
 * Return: 0 (success)
 */

int sign_check(char *str)
{
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * mul - function that finds product
 * @num1: input number
 * @num2: second input
 * Return: reuslt
 */

int mul(char *num1, char *num2)
{
	if (!sign_check(num1) || !sign_check(num2))
	{
		exit(98);
	}

	return (atoi(num1) * atoi(num2));
}

/**
 * main - main funtion
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (98);
	}
	mul(argv[1], argv[2]);

	return (0);
}
