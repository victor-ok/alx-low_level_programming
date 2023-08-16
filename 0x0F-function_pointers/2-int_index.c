#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - func that searches for an integer
 *
 * @array: an array of numbers
 * @size: number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: if no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
