#include "main.h"
/**
 * factorial - finds the factorial of a number
 * @n: number to calculate its factorial
 * Return: factorial on success, -1 on failure
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
