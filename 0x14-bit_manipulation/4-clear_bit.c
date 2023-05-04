#include "main.h"

/**
 * clear_bit - the function will allocate a value
 * given bit to 0
 * @n: this will point to the number to change of
 * unsigned long int
 * @index: bit to clear
 *
 * Return: return 1 for pass, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
