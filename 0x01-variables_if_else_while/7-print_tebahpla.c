#include <stdio.h>

/**
 * main - Printing reverse lowercase alphabet
 * Return: 0 (successful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

