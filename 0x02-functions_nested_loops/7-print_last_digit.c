#include "holberton.h"
/**
* print_last_digit - prints and returns the last digit of an input int
*
* @c: input integer
*
* Return: Positive single digit int
*/
int print_last_digit(int c)
{
int r;
r = c % 10;
if (r < 0)
r *= -1;
_putchar(r + '0');
return (r);
}
