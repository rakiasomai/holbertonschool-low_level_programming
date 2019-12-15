#include "lists.h"
 /**
 * delete_dnodeint_at_index - fun Delete node at index of a `dlistint_t` LL
 * @head: is a double pointer
 * @index: is an integer
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *y, *next, *prev;
unsigned int c;
if (*head == NULL)
return (-1);
for (y = *head, c = 0, prev = NULL; y && c < index; c++)
{
prev = y;
y = y->next;
}
if (y == NULL)
return (-1);
next = y->next;
if (prev == NULL)
{
free(y);
if (next != NULL)
{
next->prev = NULL;
*head = next;
}
else
*head = NULL;
}
else if (next == NULL)
{
prev->next = NULL;
free(y);
}
else
{
prev->next = next;
next->prev = prev;
free(y);
}
return (1);
}
