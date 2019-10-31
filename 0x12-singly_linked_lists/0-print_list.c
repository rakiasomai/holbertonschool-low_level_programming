#include "lists.h"
#include <stdio.h>
/**
* print_list - function that prints all elements of the list
* @h: head of linked list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *list;
size_t y;
y = 0;
list = h;
while (list != NULL)
{
printf("[%d] %s\n", list->len, list->str);
list = list->next;
y++;
}
return (y);
}
