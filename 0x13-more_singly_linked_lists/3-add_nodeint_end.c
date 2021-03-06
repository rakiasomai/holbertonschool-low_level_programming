#include "lists.h"
/**
* add_nodeint_end - function that adds a new node at the end of the list.
* @head: is a double pointer.
* @n: is an integer.
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *p;
listint_t *node;
p = *head;
while (p && p->next != NULL)
p = p->next;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = NULL;
if (p)
p->next = node;
else
*head = node;
return (node);
}
