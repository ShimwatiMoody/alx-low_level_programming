#include "lists.h"

/**
 * add_nodeint - This function adds a new nod
 * at the beginning of a linked list
 * @head: This is a pointer to the first node
 * @s: content of the new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int s)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->s = s;
	new->next = *head;
	*head = new;

	return (new);
}

