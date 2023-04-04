#include "lists.h"

/**
 * insert_nodeint_at_idx - Inserts a new node at a given position.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */

listint_t *insert_nodeint_at_idx(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node = *head;
	int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (current_node == NULL || current_node->next == NULL)
			return (NULL);

		current_node = current_node->next;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);

}

