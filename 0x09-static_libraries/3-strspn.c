#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String
 * @accept: bytes to be checked
 * Return: Result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int found;

	i = 0;
	while (s[i] != '\0')
	{
		found = 0;

		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
		{
			break;
		}
		i++;
	}
	return (i);
}
