#include "lists.h"

/**
 * insert_nodeint_at_index - this is to inserts a node in a linked list,
 * in a particular location
 * @head: it will be the pointer to the first node list
 * @idx: index the new node
 * @n: the data to insert new node
 *
 * Return: return the pointer of new node, or return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *count;
	listint_t *num = *head;

	count = malloc(sizeof(listint_t));
	if (!count || !head)
		return (NULL);

	count->n = n;
	count->next = NULL;

	if (idx == 0)
	{
		count->next = *head;
		*head = count;
		return (count);
	}

	for (z = 0; num && z < idx; z++)
	{
		if (z == idx - 1)
		{
			count->next = num->next;
			num->next = count;
			return (count);
		}
		else
			num = num->next;
	}

	return (NULL);
}
