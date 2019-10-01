#include "holberton.h"
/**
* puts_half - prints half of a string
* @str : string of characters
* Return: 0
*/
void puts_half(char *str)
{
{
int y, z;
while (*(str + z))
z++;
if ((z % 2) != 0)
{
for (y = z / 2 + 1; y < z; y++)
_putchar(*(str + y));
}
else
{
for (y = z / 2; y < z; y++)
_putchar(*(str + y));
}
_putchar('\n');
}
}
