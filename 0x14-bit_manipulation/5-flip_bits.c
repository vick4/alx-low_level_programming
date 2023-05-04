#include "main.h"

/**
 * flip_bits - the number of bits to change
 * @n: first of the number
 * @m: second second of the number
 *
 * Return: return the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, sum = 0;
	unsigned long int con;
	unsigned long int loud = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		con = loud >> z;
		if (con & 1)
			sum++;
	}

	return (sum);
}
