#include "lists.h"
/**
* delete_dnodeint_at_index - function that Delete node at index of a `dlistint_t` LL
* @head: is a double pointer
* @index: is an integer
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *y, *next, *p;
unsigned int c;
if (*head == NULL)
return (-1);
for (y = *head, c = 0, p = NULL; y && c < index; c++)
{
p = y;
y = y->next;
}
if (y == NULL)
return (-1);
next = y->next;
if (p == NULL)
{
free(y);
if (next != NULL)
{
next->p = NULL;
*head = next;
}
else
*head = NULL;
}
else if (next == NULL)
{
p->next = NULL;
free(y);
}
else
{
p->next = next;
next->p = p;
free(y);
}
return (1);
}
