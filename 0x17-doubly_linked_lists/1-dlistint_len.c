#include "lists.h"
/**
* dlistint_len - unction that returns the number of elements in a LL.
* @h: is a pointer.
* Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *y;
size_t c;
y = h;
while (y && y->prev)
y = y->prev;
for (c = 0; y; c++, y = y->next)
;
return (c);
}
