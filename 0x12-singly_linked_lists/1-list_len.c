#include <stdlib.h>
#include "lists.h"

/**
 * count_list_elements - counts the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
