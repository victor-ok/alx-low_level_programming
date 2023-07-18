#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: a function that prints all natural numbers from n to 98, followed by a new line.
 * Return 0
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
}
