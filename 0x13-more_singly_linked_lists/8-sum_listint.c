#include "lists.h"

/**
 * sum_listint - solve the sum of all data on the listint_t list
 * @head: this is the first node of a linked list
 *
 * Return: return sum as the result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *num = head;

	while (num)
	{
		sum += num->n;
		num = num->next;
	}

	return (sum);
}
