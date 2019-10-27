#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - function that prints strings, followed by a new line.
* @separator: is a string.
* @n: is an unsigned integer.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int y;
va_list l;
char *p;
va_start(l, n);
for (y = 0; y < n; y++)
{
p = va_arg(l, char*);
if (p == NULL)
printf("(nil)");
else
printf("%s", p);
if (y != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(l);
}
