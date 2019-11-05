#include "lists.h"
/**
* sum_listint - function that returns the sum of all the data (n) of a linked list.
* @head: is a pointer
* Return: 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
listint_t *p;
int y;
for (y = 0, p = head; p != NULL; p = p->next)
y += p->n;
return (y);
}
