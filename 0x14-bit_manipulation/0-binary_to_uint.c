#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: 0 if char in string, not 0 or 1 and digit otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int num = 0;

	if (*b == '\0')
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num = num * 2 + (b[i] - '0');
		i++;
	}
	return (num);
}
