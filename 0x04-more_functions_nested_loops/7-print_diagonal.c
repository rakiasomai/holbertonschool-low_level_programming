#include "holberton.h"

/**
 * print_diagonal - prints diagonal
 *@n: size
 * Return: none
 */

void print_diagonal(int n)
{
int count, count_2;

for (count = 0; count < n; count++)
{
for (count_2 = 0; count_2 <= count; count_2++)
{
if (count_2 != count)
{
_putchar(' ');
}
else
{
_putchar('\\');
}

}
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
