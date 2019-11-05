#include "lists.h"
/**
* add_nodeint - function that adds a new node at the beginning of a list.
* @head: is a double pointer.
* @n: is an integer.
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;
listint_t *node;
node = malloc(sizeof(listint_t));
p = *head;
if (node == NULL)
return (NULL);
node->n = n;
*head = node;
if (p == NULL)
node->next = NULL;
else
node->next = p;
return (node);
}
