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
	listint_t *new_node, *tmp_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp_node = *head;
	while (tmp_node && i < idx - 1)
	{
		tmp_node = tmp_node->next;
		i++;
	}

	if (!tmp_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp_node->next;
	tmp_node->next = new_node;

	return (_newnode);
}

