#include "lists.h"
/**
* delete_nodeint_at_index - function that deletes the node.
* @head: is a double pointers.
* @index: is an index of node.
* Return: 1 if success, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *p;
listint_t *y;
x = 0;
p = *head;
if (*head == NULL)
return (-1);
while (x < index)
{
x++;
y = p;
if (p->next)
p = p->next;
else
return (-1);
}
if (index == 0)
*head = p->next;
else if (p->next)
y->next = p->next;
else
y->next = NULL;
free(p);
return (1);
}
