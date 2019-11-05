#include "lists.h"
/**
* free_listint_safe -  function that frees a listint_t list.
* @h: is a double pointer.
* Return: the size of the list.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *p
listint_t y;
size_t c;
c = 0;
p = *h;
while (p != NULL)
{
c++;
y = p;
p = p->next;
free(y);
if (y < p)
break;
}
*h = NULL;
return (c);
}
