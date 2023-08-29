#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 *               a linked listint_t list.
 * @h: linked list of type listint_t
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
