#include "main.h"

/**
 * _islower - a function that checks for lowercase character and returns 1 if lowercase and 0 if otherwise.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (c);
}
