#include "holberton.h"

/**
* print_most_numbers - printing 0 -9 exluding 2 and 4
*
* Return: none;
*/

void print_most_numbers(void)
{
int c;

for (c = 0; c <= 9; c++)
{
if (c != 2 && c != 4)
_putchar(c + '0');
}
_putchar('\n');
}
