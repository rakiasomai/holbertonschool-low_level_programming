#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
* add_node_end - function that adds a new node at the end
* @head: double pointer to head
* @str: is a string
* Return: the adress or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *list;
list_t *node;
int y;
list = *head;
while (list && list->next != NULL)
list = list->next;
for (y = 0; str[y] != '\0'; y++)
;
node = malloc(sizeof(list_t));
if (node == NULL)
{
free(node);
return (NULL);
}
node->str = strdup(str);
if (node->str == NULL)
{
free(node);
return (NULL);
}
node->len = y;
node->next = NULL;
if (list)
list->next = node;
else
*head = node;
return (node);
}
