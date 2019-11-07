#include "holberton.h"
#include <stdio.h>
/**
* get_bit - function that returns the value of a bit at a given index.
* @n: is an integer.
* @index: is an integer.
* Return: Value of bit, or -1.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int y;
if (index > 64)
return (-1);
y = n >> index;
return (y & 1);
}
