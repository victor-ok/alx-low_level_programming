#include "main.h"

/**
 * _strncpy - copies string
 * @dest: the copied string
 * @src: the string to be copied
 * @n: the length to be copied
 * Return: dest;
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
	{
		if (*s != '\0')
		{
			*d = *s;
			s++;
			d++;
		}
		else
		{
			*d = '\0';
			d++;
		}
	}

	return (dest);
}
