#include "lists"
/**
* free_listint2 - function that frees a list.
* @head: is a double pointer.
*/
void free_listint2(listint_t **head)
{
listint_t *p;
if (head == NULL)
return;
while (*head != NULL)
{
p = *head;
*head = *head->next;
free(p);
}
}
