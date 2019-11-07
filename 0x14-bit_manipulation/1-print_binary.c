#include "holberton.h"
#include <stdio.h>
/**
* print_binary - function that prints the binary representation of a number.
* @n: is an integer.
*/
void print_binary(unsigned long int n)
{
unsigned long int y;
int i;
if (n == 0)
{
printf("0");
return;
}
for (y = n, i = 0; (y >>= 1) > 0; i++)
;
for (; i >= 0; i--)
{
if ((n >> i) & 1)
printf("1");
else
printf("0");
}
}
