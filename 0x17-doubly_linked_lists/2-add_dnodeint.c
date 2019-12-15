#include "lists.h"
/**
* add_dnodeint - function that adds a new node.
* @head: is a double pointer.
* @n: is a integer.
* Return: address of new node, or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *y, *new;
y = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
if (y == NULL)
new->next = NULL;
else
{
while (y->prev)
y = y->prev;
y->prev = new;
new->next = y;
}
*head = new;
return (*head);
}
