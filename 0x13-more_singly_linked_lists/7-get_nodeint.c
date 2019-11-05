#include "lists.h"
/**
* get_nodeint_at_index - function that returns the nth node of a linked list.
* @head: is a pointer.
* @index: is an index to find a linked list.
* Return: NULL if failed, else pointer to node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int y;
listint_t *p;
y = 0;
p = head;
while (y < index)
{
if (p)
p = p->next;
else
return (NULL);
y++;
}
if (p)
return (p);
else
return (NULL);
}
