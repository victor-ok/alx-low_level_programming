#include "main.h"

/**
 * _strcat - function to append strings
 * @dest: the string to append.
 * @src: the main string.
 * Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	char *n = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (n);
}
