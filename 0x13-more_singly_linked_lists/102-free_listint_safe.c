#include "lists.h"

/**
 * free_listint_safe - this will frees the linked list
 * @h: first node in the linked list will be pointed to the pointer
 *
 * Return: return the number of nodes in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t see = 0;
	int com;
	listint_t *num;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		com = *h - (*h)->next;
		if (com > 0)
		{
			num = (*h)->next;
			free(*h);
			*h = num;
			see++;
		}
		else
		{
			free(*h);
			*h = NULL;
			see++;
			break;
		}
	}

	*h = NULL;

	return (see);
}
