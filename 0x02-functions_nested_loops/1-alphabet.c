#include "holberton.h"
/**
* print_alphabet - prints lowercase alphabet, then newline
*
* Return: Null
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

