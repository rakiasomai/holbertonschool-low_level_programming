#include "lists.h"
/**
 * insert_dnodeint_at_index - fun that inserts a new node at a given position
 * @h: is a double pointer
 * @idx: index of list to insert node
 * @n: is an integer
 * Return: address of new node, or NULL if it failed or idx doesn't exist
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *y = *h;
if (h == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0 && *h == NULL)
{
new->prev = NULL;
new->next = NULL;
*h = new;
return (new);
}
if (idx == 0 && y != NULL)
{
new->next = y, new->prev = NULL;
y->prev = new, *h = new;
return (new);
}
while (y != NULL && idx > 1)
y = y->next, idx--;
if (y != NULL)
{
new->next = y->next;
new->prev = y;
if (y->next == NULL)
y->next = new;
else
{
y->next->prev = new;
y->next = new;
}
return (new);
}
free(new);
return (NULL);
}
