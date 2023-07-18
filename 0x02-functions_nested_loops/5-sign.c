#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: number to be checked
 * Return: 1 and prints +, Returns 0 and prints 0, Returns -1 and prints -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return ('-1');
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (n);
}
