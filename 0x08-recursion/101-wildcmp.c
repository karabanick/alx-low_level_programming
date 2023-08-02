#include "main.h"

/**
 * wildcmp_compare - Compares the strings
 * @s1: First string
 * @s2: Second string
 * Return: Result
 */

int wildcmp_compare(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*' || *s1 == *s2)
	{
		return (wildcmp_compare(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (((wildcmp_compare(s1, s2 + 1))) || ((wildcmp_compare(s1 + 1, s2))));
	}
	return (0);
}

/**
 * wildcmp - Function that compres two strings
 * if identical or not
 * @s1: First string
 * @s2: Second string
 * Return: Result
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_compare(s1, s2));
}
