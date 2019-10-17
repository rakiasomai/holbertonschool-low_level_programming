#include "holberton.h"
#include <stdlib.h>
/**
* _realloc -  function that reallocates a memory block using malloc and free
* @ptr: is a pointer
* @old_size: is an integer
* @new_size: is an integer
* Return: Pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p, *c;
unsigned int y;
if (new_size == old_size)
return (ptr);
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
return (p);
}
p = malloc(new_size);
if (p == NULL)
return (NULL);
c = ptr;
for (y = 0; y < old_size; y++)
p[y] = c[y];
free(ptr);
return (p);
}
