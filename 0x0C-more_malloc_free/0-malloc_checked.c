#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate mem using malloc
 * @b: the number of mem to be allocated
 *
 * Return: pointer to aloocated mem
*/

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
