#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: pointer to copy the string to.
 * @src: the original string to copy.
 *
 * Return: A pointer to the destination string @dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		
	    if(src[i]=='\0') {
	        src[i++]='\\';
	        src[i++]='0';
	        i++;
	    }
	    else {
	        dest[i] = src[i];
		i++;
	    }
	}
	return (dest);
}