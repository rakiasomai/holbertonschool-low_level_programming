#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
* add_node - function that adds a new node.
* @head: is a double pointer to head
* @str: is a string.
* Return: the adress.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
int y;
for (y = 0; dup_str[y] != '\0'; y++)
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
node->next = *head;
*head = node;
return (*head);
}
