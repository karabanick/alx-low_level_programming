#include "main.h"

/**
 * positive_or_negative - prototype function that assigns a random number
 * to the variable i and tests for positive or negative
 * @i: function parameter
 * Return: result
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
