#include "lists.h"
#include <stdio.h>
/**
* print_listint - function that prints all the elements of a list.
* @h: is linked list.
* Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t x;
const listint_t *y;
for (y = h, x = 0; y != NULL; x++, y = y->next)
printf("%d\n", y->n);
return (x);
}
