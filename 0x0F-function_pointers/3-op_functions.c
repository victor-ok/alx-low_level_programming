#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_add(int a, int b)
{
	return("%d\n", a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_sub(int a, int b)
{
	return("%d\n", a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_mul(int a, int b)
{
	return("%d\n", a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_div(int a, int b)
{
	return("%d\n", a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_mod(int a, int b)
{
	return("%d\n", a % b);
}
