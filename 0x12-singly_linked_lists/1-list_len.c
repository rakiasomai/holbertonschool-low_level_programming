#include "lists.h"
/**
* list_len - function that Returns the number of elements.
* @h: head of linked list.
* Return: the number of elements.
*/
size_t list_len(const list_t *h)
{
const list_t *list;
size_t y;
y = 0;
list = h;
while (list != NULL)
{
list = list->next;
y++;
}
return (y);
}
