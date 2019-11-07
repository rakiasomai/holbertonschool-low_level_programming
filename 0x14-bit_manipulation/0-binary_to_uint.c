#include "holberton.h"
#include <stdio.h>
/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: is a character.
* Return: 0 or the convert number.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int y, x;
int l;
if (b == NULL)
return (0);
for (l = 0; b[l]; l++)
{
if (b[l] != '0' && b[l] != '1')
return (0);
}
for (x = 1, y = 0, l--; l >= 0; l--, x *= 2)
{
if (b[l] == '1')
y += x;
}
return (y);
}
