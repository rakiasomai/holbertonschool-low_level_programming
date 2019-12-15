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
dlistint_t *y, *p, *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
for (y = *h, c = 1; y && c < idx; c++, y = y->next)
p = y;
if (idx == 0)
{
*h = new; new->p = NULL;
new->next = (y == NULL) ? NULL : y;
return (new);
}
if (idx == 1)
{
p = *h;
y = ((*h)->next == NULL) ? NULL : (*h)->next;
new->p = p; new->next = y; p->next = new;
if (y)
y->p = new;
return (new);
}
if (idx == c && y == NULL)
{
if (p != NULL)
{
new->p = p; new->next = NULL;
p->next = new; return (new);
}
free(new); return (NULL);
}
else if (idx != c && y == NULL)
{
free(new); return (NULL);
}
p = y; y = y->next; new->p = p;
new->next = y; p->next = new; y->p = new;
return (new);
}
