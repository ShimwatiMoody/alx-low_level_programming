#include "main.h"

/**
 * get_endianness - This function checks if a machine is
 * little or big endian
 * Return: 0 for big
 * Otherwise, 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

