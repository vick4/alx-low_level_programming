#include "lists.h"

/**
 * listint_len - this will be returning the number
 * of elements in a linked lists
 * @h: this is the head pointer linked list of type listint_t to traverse
 *
 * Return: the number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t con = 0;

	while (h)
	{
		h = h->next;
		con++;
	}
	return (con);
}
