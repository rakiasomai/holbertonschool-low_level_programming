#include "lists.h"
#include <stdio.h>
/**
* print_listint_safe - function that prints a listint_t linked list.
* @head: is a pointer.
* Return: number of nodes in list else (98)
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *p;
size_t c;
const listint_t *y;
p = head;
if (p == NULL)
exit(98);
c = 0;
while (p != NULL)
{
y = p;
p = p->next;
c++;
printf("[%p] %d\n", (void *)y, y->n);
if (y < p)
{
printf("-> [%p] %d\n", (void *)p, p->n);
break;
}
}
return (c);
}
