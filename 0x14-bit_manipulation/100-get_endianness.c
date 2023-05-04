#include "main.h"

/**
 * get_endianness - this function will checks if a machine
 * is little or big endian
 * Return: return 0 for big, or
 * return 1 for little
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return (*c);
}
