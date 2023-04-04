#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in the linked list
 */

size_t print_listint(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		num_nodes++;
	}
	return (num_nodes);
}
