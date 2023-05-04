#include "main.h"

/**
 * set_bit - bit will be index to 1
 * @n: pointer to the number to change which
 * is unsigned long int
 * @index: index set to 1
 *
 * Return: return 1 for success or
 * return -1 if not successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
