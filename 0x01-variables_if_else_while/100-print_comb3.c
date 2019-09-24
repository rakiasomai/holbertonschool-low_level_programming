#include <stdio.h>
/**
 * main - 100
 * Aladin Bensassi
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
for (j = 48; j <= 57; j++)
if (i < j)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
