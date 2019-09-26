#include <stdio.h>
#include "holberton.h"

/**
* void more_numbers(void)- prints 10 times the numbers, from 0 to 14.
* @c
* return : 0
*/
void more_numbers(void)
{
int c, j;
for (c = 0; c <= 9; c++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
