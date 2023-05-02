#include "lists.h"

/**
 * pop_listint - the head node of a linked list will be deleted
 * @head: pointer to the first element
 *
 * Return: return data inside elements which was deleted,
 * or if the list is emptyt then return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *count;
	int temp;

	if (!head || !*head)
		return (0);

	temp = (*head)->n;
	count = (*head)->next;
	free(*head);
	*head = count;

	return (temp);
}
