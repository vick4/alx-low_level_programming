#include "lists.h"

/**
 * get_nodeint_at_index - this will returns the node
 * at a particular index of a linked list
 * @head: pointer of the first node in the linked list
 * @index: this is the index node to return
 *
 * Return: return the pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *count = head;

	while (count && z < index)
	{
		count = count->next;
		z++;
	}

	return (count ? count : NULL);
}
