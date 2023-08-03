#include "main.h"

/**
 * set_bit - This function sets a bit at index 1
 * @n: pointer
 * @index: index
 * Return: 1 for success
 * Otherwise, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

