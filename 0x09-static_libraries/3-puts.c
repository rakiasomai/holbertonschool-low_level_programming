#include "holberton.h"
/**
* _puts -  prints a string.
* @str : is a string
* Return: 0
*/
void _puts(char *str)
{
int y;
for (y = 0; *(str + y) != 0; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
