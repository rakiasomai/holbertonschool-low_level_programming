#include "lists.h"
#include <stdio.h>
/**
* find_listint_loop -  function that finds the loop in a linked list.
* @head: head of linked list.
* Return: Address of node where loop starts, or NULL if no loop found.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *p;
listint_t *y;
if (head == NULL)
return (NULL);
p = y = head;
do {
if (p->next)
p = p->next;
else
return (NULL);
if (y->next->next)
y = y->next->next;
else
return (NULL);
} while (y != p);
p = head;
while (y != p)
{
y = y->next;
p = p->next;
}
return (p);
}
