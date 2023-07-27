#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of int.
 * @a: array
 * @n: length of reversal
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, rev;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j--] = rev;
	}
}
