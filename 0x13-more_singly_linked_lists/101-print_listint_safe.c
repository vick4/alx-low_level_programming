#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - a number of unique nodes
 * in the looped listint_t linked list.
 * @head: A head of the listint_t to check.
 *
 * Return: the list is not looped - return 0.
 * Otherwise - number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lion, *hen;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lion = head->next;
	hen = (head->next)->next;

	while (hen)
	{
		if (lion == hen)
		{
			lion = head;
			while (lion != hen)
			{
				nodes++;
				lion = lion->next;
				hen = hen->next;
			}

			lion = lion->next;
			while (lion != hen)
			{
				nodes++;
				lion = lion->next;
			}

			return (nodes);
		}

		lion = lion->next;
		hen = (hen->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this function will Prints a listint_t.
 * @head: A head of the listint_t list to the pointer
 *
 * Return: The number of nodes in the list should be retured.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

