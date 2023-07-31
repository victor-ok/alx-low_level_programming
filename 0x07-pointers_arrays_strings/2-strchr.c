#include "main.h"
#include <stdio.h>

/**
 * *_strchr - checks occurenece of char in string
 * @s: string
 * @c: character to be checked for
 * Return: a pointer to the first occurence of the character
*/

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
