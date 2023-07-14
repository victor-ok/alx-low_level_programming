#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase alphabets except q and e
 * Return: 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar("\n");

	return (0);
}
