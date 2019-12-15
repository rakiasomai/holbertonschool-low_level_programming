#include "lists.h"
/**
* print_dlistint -  function that prints all the elements of a dlistint_t list.
* @h: is a pointer.
* Return: the numb of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *y;
size_t c;
y = h;
while (y && y->prev)
y = y->prev;
for (c = 0; y; c++, y = y->next)
printf("%d\n", y->n);
return (c;
}
