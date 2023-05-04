#include "main.h"

/**
 * print_binary - this function will prints the binary
 * of a giving number
 * @n: this is the number to print in unsigned long int
 *
 * Return: we have no return
 */
void print_binary(unsigned long int n)
{
	int z, num = 0;
	unsigned long int flow;

	for (z = 63; z >= 0; z--)
	{
		flow = n >> z;

		if (flow & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
