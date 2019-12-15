#include "lists.h"
/**
* add_dnodeint_end - function that adds a node in the end of LL
* @head: is a double pointer.
* @n: is an integer.
* Return: Address of new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *y, *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
y = *head;
while (y && y->next)
y = y->next;
if (y)
{
new->prev = y;
y->next = new;
}
else
{
*head = new;
new->prev = NULL;
}
return (new);
}
