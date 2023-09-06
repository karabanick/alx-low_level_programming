#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - funtion that concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument  vector
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	int len = 0;
	int i;
	char *j;
	char *p;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = av[i]; *j; j++)
		{
			len++;
		}
	}
	ptr = (char *)malloc(len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;

	for (i = 0; i < ac; i++)
	{
		for (j = av[i]; *j; j++)
		{
			*p++ = *j;
		}
		*p++ = '\n';
	}
	*p = '\0';

	return (ptr);
}
