#include "holberton.h"
/**
* void print_alphabet(void) - check the code for Holberton School students.
*
* Return: Always 0
*/
void print_alphabet(void)
{
char *a = "abcdefghijklmnopqrstuvwxyz\n";
while (*a)
{
_putchar(*a);
a++;
}
}
