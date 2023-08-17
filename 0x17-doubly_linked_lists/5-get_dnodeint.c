#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at a specific index.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve.
 * Return: Pointer to the nth node, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}

	return (NULL);
}

