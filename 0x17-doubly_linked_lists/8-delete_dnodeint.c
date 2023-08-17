#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index where to delete the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nav, *before, *deleted;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	nav = *head;

	if (index == 0)
	{
		*head = nav->next;
		if (*head)
			(*head)->prev = NULL;
		free(nav);
		return (1);
	}
	while (nav)
	{
		if (i == index)
			deleted = nav;
		if (i == index - 1)
			before = nav;
		if (i == index + 1)
		{
			before->next = nav;
			if (nav)
				nav->prev = before;
			free(deleted);
			return (1);
		}
		if (nav->next == NULL && i == index)
		{
			before->next = NULL;
			free(nav);
			return (1);
		}
		nav = nav->next;
		i++;
	}
	return (-1);
}

