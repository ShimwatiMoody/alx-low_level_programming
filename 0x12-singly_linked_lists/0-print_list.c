#include <stdio.h>
#include "lists.h"

/**
* print_list - This function prints all the elements
* of a linked list
* @h: A funcgion that shows a pointer to the list_t list
* Return: the no. of nodes
*/
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}

return (s);
}

