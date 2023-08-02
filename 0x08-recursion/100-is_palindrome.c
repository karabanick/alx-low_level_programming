#include "main.h"

/**
 * is_palindrome_checker - checks whether a string is a palindrome
 * @s: Input
 * @start: Start point
 * @end: End point
 * Return: Result
 */

int is_palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - Function that checks whether a string is a palindrome
 * @s: Input string
 * Return: Result
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length == 0)
	{
		return (1);
	}
	return (is_palindrome_checker(s, 0, length - 1));
}

#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer to a string
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		_putchar('\n');
	}
	return (1 + _strlen_recursion(s + 1));
}
