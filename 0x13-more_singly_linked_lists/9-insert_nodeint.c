#include "lists.h"
#include <stdio.h>
/**
* insert_nodeint_at_index - function that inserts a new node.
* @head: is a double pointer.
* @index: is an index node.
* @n: is an integer.
* Return: Address of new node or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *node;
listint_t *p;
unsigned int y;
if (head == NULL)
return (NULL);
p = *head;
for (y = 1; y && y < index; y++)
{
p = p->next;
if (p == NULL)
return (NULL);
}
node = malloc(sizeof(listint_t));
if (node == NULL)
{
free(node);
return (NULL);
}
node->n = n;
if (index == 0)
{
*head = node;
node->next = p;
}
else if (p->next)
{
node->next = p->next;
p->next = node;
}
else
{
node->next = NULL;
p->next = node;
}
return (node);
}
