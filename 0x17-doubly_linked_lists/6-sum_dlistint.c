#include "lists.h"
/**
* sum_dlistint - function that returns the sum of all the data.
* @head: is a pointer
* Return: sum of all `n` or 0 if LL is empty
*/
int sum_dlistint(dlistint_t *head)
{
int s;
dlistint_t *y;
y = head;
for (s = 0; y; y = y->next)
s += y->n;
return (s);
}
