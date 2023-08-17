#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: unsigned int
 *
 * Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
