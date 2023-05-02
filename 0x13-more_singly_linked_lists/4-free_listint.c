#include "lists.h"

/**
 * free_listint - this will frees the linked list
 * @head: this is the listint_t head list to be free
 *
 * Return: Return NULL if error apears
 */
void free_listint(listint_t *head)
{
	listint_t *con;

	while (head)
	{
		con = head->next;
		free(head);
		head = con;
	}
}
