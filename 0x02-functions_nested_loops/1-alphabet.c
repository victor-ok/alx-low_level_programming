#include "main.h"

/**
 * main - main block
 * Description: a function that prints lower cased alphabets
 * Return 0;
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
