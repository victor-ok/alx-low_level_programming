#include "main.h"

/**
 * puts2 - prints one char out of two of a string.
 * @str: the string containing characters.
 */

void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		i++;
		length++;
	}
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
