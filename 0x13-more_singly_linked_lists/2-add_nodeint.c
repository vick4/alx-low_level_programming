#include "lists.h"

/**
 * add_nodeint - this will be adding a new node at the beginning of linked list
 * @head: this is the pointer first node in the list
 * @n: this is the data to enter in the new node
 *
 * Return: return the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *count;

	count = malloc(sizeof(listint_t));
	if (count == NULL)
		return (NULL);

	count->n = n;
	count->next = *head;
	*head = count;

	return (count);
}
