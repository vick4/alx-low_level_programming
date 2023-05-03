#include "lists.h"

/**
 * free_listint2 - this is a function which will frees a linked list
 * @head: this is a double pointer to the listint_t list to be freed
 *
 * Return: return void
 */
void free_listint2(listint_t **head)
{
	listint_t *con;

	if (head == NULL)
		return;

	while (*head)
	{
		con = (*head)->next;
		free(*head);
		*head = con;
	}
	*head = NULL;
}
