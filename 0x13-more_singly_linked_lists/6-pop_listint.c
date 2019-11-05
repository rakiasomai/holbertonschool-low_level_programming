#include "lists.h"
/**
* pop_listint - function that deletes the head node of a linked list.
* @head: is a double pointer.
* Return: 0 if the linked list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *p;
int y;
if (*head == NULL)
return (0);
p = *head;
y = p->n;
*head = p->next;
free(p);
return (y);
}
