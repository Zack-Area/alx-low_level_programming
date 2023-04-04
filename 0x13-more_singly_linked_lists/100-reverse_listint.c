#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = NULL;

	while (*head)
	{
		curr = (*head)->next;
		(*head)->curr = prev;
		prev = *head;
		*head = curr;
	}

	*head = prev;

	return (*head);
}
