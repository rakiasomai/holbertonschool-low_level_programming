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
list_t *node = NULL;
size_t l = 0;
while (str && str[l])
l++;
node = malloc(sizeof(*node));
if (node)
{
node->str  = strdup(str);
node->len = l;
node->next = *head;
*head = node;
}
return (node);
}
