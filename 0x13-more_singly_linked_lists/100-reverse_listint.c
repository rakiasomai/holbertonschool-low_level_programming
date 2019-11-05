#include "lists.h"
#include <stdio.h>
/**
* reverse_listint -  function that reverses a listint_t linked list.
* @head: is a double pointer.
* Return: pointer to first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *y;
listint_t *p;
if (*head == NULL)
return (NULL);
p = *head;
*head = p->next;
y = (*head)->next;
p->next = NULL;
if (*head == NULL)
{
*head = p;
return (p);
}
while (y != NULL)
{
(*head)->next = p;
p = *head;
*head = y;
y = (*head)->next;
}
(*head)->next = p;
return (*head);
}
