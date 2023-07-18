#include "main.h"

/**
 * main - main block
 * Description: a function that checks for alphabetic character it returns 1 if c is a letter, lowercase or uppercase or returns 0 otherwise.
 * Return 0
*/

int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
