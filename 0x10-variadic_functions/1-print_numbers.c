#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: is a pointer.
* @n: is an integer.
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int y;
va_list x;
va_start(x, n);
for (y = 0; y < n; y++)
{
printf("%d", va_arg(x, int));
if (y != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(x);
}
