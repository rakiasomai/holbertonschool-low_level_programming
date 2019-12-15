#include "lists.h"
/**
* get_dnodeint_at_index - function that returns the nth node of a LL.
* @head: is a pointer
* @index: node index to return
* Return: node at index given or NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *y;
unsigned int c;
y = head;
for (c = 0; y && c < index; y = y->next, c++)
;
return (y);
}
