#include "main.h"
/**
 * _islower - function for lowercase character checking
 * @c:   int for the argument of the function
 * Return: 0(successful)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}

