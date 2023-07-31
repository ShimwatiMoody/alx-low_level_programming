#include "lists.h"

/**
 * listint_len - This funct. returns the no. of elemnts
 * in a linked lists
 * @r: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *r)
{
	size_t num = 0;

	while (r)
	{
		num++;
		r = r->next;
	}

	return (num);
}

