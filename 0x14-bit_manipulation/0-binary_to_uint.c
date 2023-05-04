#include "main.h"

/**
 * binary_to_uint - this function will converts a binary number to unsigned int
 * @b: the string has a binary number
 *
 * Return: return the int that was unsigned
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int count = 0;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		count = 2 * count + (b[z] - '0');
	}

	return (count);
}
