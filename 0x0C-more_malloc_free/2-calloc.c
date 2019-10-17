#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - a function that allocates memory for an array, using malloc.
* @nmemb: is an integer
* @size: is an integer
* Return: Null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;
unsigned int y;
if (nmemb <= 0 || size <= 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (y = 0; y < nmemb; y++)
p[y] = 0;
return (p);
}
