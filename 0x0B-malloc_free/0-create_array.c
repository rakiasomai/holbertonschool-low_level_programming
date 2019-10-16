#include <stdlib.h>
#include "holberton.h"
/**
* *create_array - function that creats an array of chars
* @size: is an integer.
* @c: is a characters.
* Return: Always NULL
*/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(*p));
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
