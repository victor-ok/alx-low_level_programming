#include "main.h"

/**
 * main - main block
 * Description: a function that checks for lowercase character and returns 1 if lowercase and 0 if otherwise.
 * Return 0
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

	return(c);
}
