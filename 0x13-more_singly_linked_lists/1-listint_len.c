#include "lists.h"

/**
 * listint_len - Computes the length of a singly linked list of integers
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list as a size_t value
 */

size_t listint_len(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head != NULL)
	{
		head = head->next;
		num_nodes++;
	}
	return (num_nodes);
}
