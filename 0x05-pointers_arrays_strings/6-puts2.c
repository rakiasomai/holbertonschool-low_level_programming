#include "holberton.h"
/**
* puts2 - prints every other character of a string
* @str: string of characters
* Return: 0
*/
void puts2(char *str)
{
int y;
char a;
for (y = 0; *(str + y) != 0; y++)
{
if (y % 2 == 0)
{
a = *(str + y);
_putchar(a);
}
}
_putchar('\n');
}
