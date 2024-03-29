#include "lists.h"

/**
 * find_listint_loop - finds the node where a loop starts in a linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: pointer to the node where the loop starts, NULL if there's no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (NULL);
}
