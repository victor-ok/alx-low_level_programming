#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 *
 * @h: the linked list_t list.
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
