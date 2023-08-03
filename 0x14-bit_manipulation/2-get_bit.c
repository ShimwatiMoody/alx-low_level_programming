#include "main.h"

/**
 * get_bit - This funct. returns the value of a bit
 * @n: no.
 * @index: index
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

