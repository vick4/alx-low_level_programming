#include "lists.h"

/**
 * delete_nodeint_at_index - remove the node of a linked list certain index
 * @head: this is to point to first element in list
 * @index: index the node to remove
 *
 * Return: return 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *num = *head;
	listint_t *pull = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(num);
		return (1);
	}

	while (z < index - 1)
	{
		if (!num || !(num->next))
			return (-1);
		num = num->next;
		z++;
	}


	pull = num->next;
	num->next = pull->next;
	free(pull);

	return (1);
}
