#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a linked list at a given index.
 *
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to be returned.
 *
 * Return: Pointer to the node at the given index, or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
