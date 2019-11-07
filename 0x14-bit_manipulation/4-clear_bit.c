#include "holberton.h"
#include <stdio.h>
/**
* clear_bit - function that sets the value of a bit to 0 at a given index.
* @n: is a pointer.
* @index: is an integer.
* Return: 1 or -1.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
unsigned int y;
if (index > 64)
return (-1);
y = index;
for (x = 1; y > 0; x *= 2, y--)
;
if ((*n >> index) & 1)
*n -= x;
return (1);
}
