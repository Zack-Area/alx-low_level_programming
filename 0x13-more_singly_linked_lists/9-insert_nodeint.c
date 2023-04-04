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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node;

	current_node = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			current_node = current_node->next;
		}
	}

	if (current_node == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node->next;
		current_node->next = new;
	}

	return (new_node);
}

