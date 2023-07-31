#include "lists.h"

/**
 * pop_listint - This function deletes the head node
 * @head: This is aa pointer to the first element
 * Return: contentr for deletion inside thr element
 * 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

