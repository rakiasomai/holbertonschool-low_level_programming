#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function that allocate memory using malloc.
* @b: is an unsigned integer
* Return: void pointer to allocated memory.
*/
void *malloc_checked(unsigned int b)
{
void *y;
y = malloc(b);
if (y == NULL)
exit(98);
return (y);
}
