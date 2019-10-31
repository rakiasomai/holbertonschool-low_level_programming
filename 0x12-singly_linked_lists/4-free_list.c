#include "lists.h"
/**
* free_list - function to free a list
* @head: head of linked list
*/
void free_list(list_t *head)
{
list_t *list;
list_t *n;
list = head;
while (list != NULL)
{
n = list->next;
free(list->str);
free(list);
list = n;
}
}
