#include "main.h"

/**
 * get_bit - returns the value of a bit at an index number
 * @n: number to search for the unsigned long int
 * @index: index of the bit
 *
 * Return: this will return the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bed;

	if (index > 63)
		return (-1);

	bed = (n >> index) & 1;

	return (bed);
}
