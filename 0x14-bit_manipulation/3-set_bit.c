#include "holberton.h"
/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @n: is a pointer
* @index: is an integer
* Return: 1 or -1.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int y;
if (index > 64)
return (-1);
for (y = 1; index > 0; index--, y *= 2)
;
*n += y;
return (1);
}
