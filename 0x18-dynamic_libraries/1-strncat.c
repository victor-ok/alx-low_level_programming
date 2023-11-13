#include "main.h"

/**
 * _strncat - function to conacat strings at a particular valu.
 * @dest: the main string.
 * @src: the string to be concatinated.
 * @n: the index to where it should be concatinated to
 * Return: a pointer to dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *s = dest;
	char *c = src;

	while (*s != '\0')
	{
		s++;
	}

	for (i = 0; i < n && *c != '\0'; i++)
	{
		*s = *c;
		c++;
		s++;
	}

	*s = '\0';

	return (dest);
}
