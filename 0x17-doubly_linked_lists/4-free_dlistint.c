#include "lists.h"
/**
* free_dlistint - function that free a dlistint_t list.
* @head: head of Linked list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *y, *z;
if (head == NULL)
return;
y = head;
while (y->prev)
y = y->prev;
while (y)
{
z = y;
y = y->next;
free(z);
}
}
