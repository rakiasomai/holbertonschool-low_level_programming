#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
for (y = 0; y < size; y++)
p[y] = 0;
return (p);
}
