#include "main.h"

/**
 * _puts -A function that  prints a string to stdout
 * @str: The string
 * _putchar prints a new line
 */
void _puts(char *str)
{
        while (*str)
                _putchar(*str++);

        _putchar('\n');
}
