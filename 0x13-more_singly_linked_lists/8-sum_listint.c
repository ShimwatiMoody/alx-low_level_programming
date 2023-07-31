#include "lists.h"

/**
 * sum_listint - This funct,.calculates the sum of data
 * @head:1st node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

