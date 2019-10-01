#include "holberton.h"
/**
* print_rev - prints a string, in reverse.
* @s : a string of characters.
* Return: 0
*/
void print_rev(char *s)
{
int y;
y = 0;
while (*(s + y) != '\0')
{
y++;
}
while (y > 0)
{
_putchar(*(s + y - 1));
y--;
}
_putchar('\n');
}
