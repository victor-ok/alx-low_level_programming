#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containg the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, count;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				count = 1;
			}
		}
		if (count == 0)
		{
			return (k);
		}
	}

	return (0);
}
