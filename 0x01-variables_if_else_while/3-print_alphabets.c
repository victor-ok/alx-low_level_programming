#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase alphabets and the uppercase.
 * Return: 0
*/
int main(void)
{
	char c;
	char b;

	c = 'a';
	b = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar("\n");

	return (0);
}
