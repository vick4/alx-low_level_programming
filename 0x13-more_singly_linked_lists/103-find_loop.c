#include "lists.h"

/**
 * find_listint_loop - this function is to finds loop in linked list
 * @head: the linked list to find
 *
 * Return: return the address of node where the loop starts,
 * or return NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *jump = head;
	listint_t *seat = head;

	if (!head)
		return (NULL);

	while (jump && seat && seat->next)
	{
		seat = seat->next->next;
		jump = jump->next;
		if (seat == jump)
		{
			jump = head;
			while (jump != seat)
			{
				jump = jump->next;
				seat = seat->next;
			}
			return (seat);
		}
	}

	return (NULL);
}
