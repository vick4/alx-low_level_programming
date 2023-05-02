#include "lists.h"

/**
 * reverse_listint - linked list will be reverse
 * @head: the first node in the list will be a pointer
 *
 * Return: return the pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *call = NULL;
	listint_t *net = NULL;

	while (*head)
	{
		net = (*head)->next;
		(*head)->next = call;
		call = *head;
		*head = net;
	}

	*head = call;

	return (*head);
}
