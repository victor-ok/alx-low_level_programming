#include "list.h"

/**
 * add_node - function that adds a new node at the beginning of a list.
 *
 * @head: pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: if fails - NULL else the addr of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}
	new->str = duplicate;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
