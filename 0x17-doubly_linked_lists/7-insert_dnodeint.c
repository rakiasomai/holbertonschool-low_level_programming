#include "lists.h"
/**
* insert_dnodeint_at_idx - function that insert a new node at given position
* @h: is a double pointer
* @idx: is an integer
* @n: is an integer
* Return: Address of new node, or NULL if failed
*/
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
unsigned int c;
dlistint_t *y, *prev, *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
for (y = *h, c = 1; y && c < idx; c++, y = y->next)
prev = y;
if (idx == 0)
{
*h = new; new->prev = NULL;
new->next = (y == NULL) ? NULL : y;
return (new);
}
if (idx == 1)
{
prev = *h;
y = ((*h)->next == NULL) ? NULL : (*h)->next;
new->prev = prev; new->next = y; prev->next = new;
if (y)
y->prev = new;
return (new);
}
if (idx == c && y == NULL)
{
if (prev != NULL)
{
new->prev = prev; new->next = NULL;
prev->next = new; return (new);
}
free(new); return (NULL);
}
else if (idx != c && y == NULL)
{
free(new); return (NULL);
}
prev = y; y = y->next; new->prev = prev;
new->next = y; prev->next = new; y->prev = new;
return (new);
}
