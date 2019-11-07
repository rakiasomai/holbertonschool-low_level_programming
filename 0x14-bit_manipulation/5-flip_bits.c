#include "holberton.h"
#include <stdio.h>
/**
* flip_bits - unction that returns the number of bits.
* @n: is an integer.
* @m: is an integer.
* Return: the number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int y;
int c;
y = n ^ m;
c = 0;
while (y)
{
c++;
y &= (y - 1);
}
return (c);
}
