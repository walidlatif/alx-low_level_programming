#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index where to insert the new node.
 * @n: Value to insert.
 * Return: Address of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nav, *new, *before;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	nav = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (nav)
	{
		if (i == idx - 1)
			before = nav;

		if (i == idx)
		{
			new->next = nav;
			nav->prev = new;
			before->next = new;
			new->prev = before;
			return (new);
		}

		if (!nav->next && i + 1 == idx)
			return (add_dnodeint_end(h, n));

		nav = nav->next;
		i++;
	}

	return (NULL);
}

/**
 * add_dnodeint_end - Adds a new node at the end.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value of the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * add_dnodeint - Adds a new node at the beginning.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value of the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

