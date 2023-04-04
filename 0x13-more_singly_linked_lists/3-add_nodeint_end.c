#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the head node of the linked list.
 *         NULL if memory allocation fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	(void)temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (*head);
}
