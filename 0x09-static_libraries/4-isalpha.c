#include "main.h"

/**
 ** _isalpha - Function that checks for alphabetic character
 ** Return: 1 for alphabetic character and 0 for otherwise
 ** @c: Character to be tested
 **/

int _isalpha(int c)
{

	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
