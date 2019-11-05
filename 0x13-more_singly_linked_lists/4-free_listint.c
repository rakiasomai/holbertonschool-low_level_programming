#include "lists.h"
/**
* free_listint - function that frees a list.
* @head: is a pointer.
*/
void free_listint(listint_t *head)
{
listint_t *p;
while (head != NULL)
{
p = head;
head = head->next;
free(p);
}
}
