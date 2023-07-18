#include "main.h"

/**
 * main -main block
 * Description: a function that prints the last digit of a number.
 * Return 0
*/

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= (-1);
	}
	else
	{
		_putchar (n + '0');
	}
	return (n);
}
