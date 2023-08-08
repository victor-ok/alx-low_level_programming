#include "main.h"
#include "stdlib.h"

/**
 * create_array - function to create array of chars and initialize,
 * with a specific char.
 * @size: size of the array to be created
 * @c: the char to initialize the array c.
 * Return: pointer to the array on success, Null on error
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
