#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all data (n) in a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

