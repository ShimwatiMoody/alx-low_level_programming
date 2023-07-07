#include <stdio.h>
#include "main.h"

/**
 * _putchar - A function that writes the char c to stdout
 * @c:char to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
