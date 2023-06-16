#include <stdio.h>

/**
 * main - Printing alphabets in lowrcase, then uppercase
 * Return: 0 (successfull)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

