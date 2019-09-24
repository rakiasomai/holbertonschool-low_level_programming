#include "holberton.h"
/**
* times_table - prints the 9 times table, starting at 0.
*
* Returns - void
*/
void times_table(void)
{
int i, j, a, d, u;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
{
_putchar(0 + '0');
_putchar(',');
_putchar(' ');
}
else
{
a = i * j;
d = a > 9 ? a / 10 : -16;
_putchar(d + '0');
u = a % 10;
_putchar (u + '0');
if (j == 9)
break;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
