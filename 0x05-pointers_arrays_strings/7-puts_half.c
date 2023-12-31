#include "main.h"

/**
 * puts_half - pints the second half of a string.
 * @str: the string to be printed.
 */

void puts_half(char *str)
{
	int i;
	int len;
	int n;

	i = 0;
	len = 0;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}

	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
