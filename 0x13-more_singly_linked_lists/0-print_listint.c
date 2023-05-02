#include "lists.h"

/**
 * print_listint - this will prints all the elements of all linked list
 * @h: this is the head of the linked list of type listint_t to print
 *
 * Return: this will return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t con = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		con++;
	}

	return (con);
}
