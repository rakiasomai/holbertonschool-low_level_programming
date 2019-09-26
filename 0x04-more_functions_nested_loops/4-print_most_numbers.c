#include <stdio.h>
#include "holberton.h"

/**
* print_most_numbers - from 0 to 9 without 2 and 4.
* Return: Always 0.
*/
void print_most_numbers(void)
{
int c;
for (c = 0 ; c <= 9; c++)
{
if (c != 2 && c != 4)
_putchar(c + '0');
}
_putchar('\n');
}
