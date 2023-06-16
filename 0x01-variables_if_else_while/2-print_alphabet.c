#include <stdio.h>

/**
 * main - Printing lowercase alphabets
 * Return: 0 (successful)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

