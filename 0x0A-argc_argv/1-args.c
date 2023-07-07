#include <stdio.h>
#include "main.h"
/**
 * main - A function that prints the no. of arguments
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
