#include "lists.h"

/**
 * print_listint - A function that prints
 * elements of a linked list
 * @s: This is a linked list of type listint_t to print
 * Return: nodes
 */
size_t print_listint(const listint_t *s)
{
	size_t num = 0;

	while (s)
	{
		printf("%d\n", s->n);
		num++;
		s = s->next;
	}

	return (num);
}

