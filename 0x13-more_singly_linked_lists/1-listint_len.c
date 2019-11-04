#include "lists.h"
/**
* listint_len - function that returns the number of elements in a linked list.
* @h: is a linked list.
* Return: the number of elements in the linked list.
*/
size_t listint_len(const listint_t *h)
{
size_t x;
const listint_t *y;
for (y = h, x = 0; y != NULL; x++, y = y->next)
;
return (x);
}
