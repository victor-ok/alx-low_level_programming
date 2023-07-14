#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase alphabets.
 * Return: 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
