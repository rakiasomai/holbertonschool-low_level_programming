#include "holberton.h"

/**
* print_line - draws a straight line into terminal
* @n: integer to count
* Return: none;
*/

void print_line(int n)
{
int count;

for (count = 0; count < n; count++)
{
_putchar('_');
}
_putchar('\n');
}
