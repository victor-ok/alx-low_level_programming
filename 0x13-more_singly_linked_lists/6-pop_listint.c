#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 *               linked list and returns the head node’s data (n).
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the data in the elements which was deleted,
 *         or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
	{
		return (0);
	}

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
