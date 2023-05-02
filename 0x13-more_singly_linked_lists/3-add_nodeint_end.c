#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - this will adds node in the end of linked list
 * @head: the head of the pointer will point at first element in the list
 * @n: this is the data to enter on the new element
 *
 * Return: return the pointer to the new node, or return NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *count;
	listint_t *num = *head;

	count = malloc(sizeof(listint_t));
	if (!count)
		return (NULL);

	count->n = n;
	count->next = NULL;

	if (*head == NULL)
	{
		*head = count;
		return (count);
	}

	while (num->next)
		num = num->next;

	num->next = count;

	return (count);
}
