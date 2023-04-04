#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 *
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Return: The integer value stored in the head node.
 *         If the list is empty, returns 0.
 */

int pop_listint(listint_t **head)
{
	int popped_value;
	listint_t *prev_head;
	listint_t *nhead;

	if (*head == NULL)
		return (0);

	prev_head = *head;

	popped_value = prev_head->n;

	nhead = prev_head->next;

	free(prev_head);

	*head = nhead;

	return (popped_value);
}
