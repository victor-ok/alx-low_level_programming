#include "main.h"

/**
 * main - main block
 * Description: a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return 0
*/
void print_alphabet_x10(void)
{
	int counter;
	char c;

	counter = 0;
	c = 'a';

	while (counter < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		counter++;
	}


}
