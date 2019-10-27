#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* _printchar - function that print a character.
* @list: is a list
*/
void _printchar(va_list list)
{
printf("%c", va_arg(list, int));
}
/**
* _printstr - function that print string
* @list: is a list
*/
void _printstr(va_list list)
{
char *s;
s = va_arg(list, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
}
/**
* _printfloat - function that print float
* @list: va_list passed to function
*/
void _printfloat(va_list list)
{
printf("%f", va_arg(list, double));
}
/**
* _printint - function that print an integer
* @list: is a list
*/
void _printint(va_list list)
{
printf("%d", va_arg(list, int));
}
/**
* print_all - function that print anything.
* @format: is a string of parameters
*/
void print_all(const char * const format, ...)
{
unsigned int y, z;
va_list l;
char *p;
checker storage[] = {
{ "c", _printchar },
{ "f", _printfloat },
{ "s", _printstr },
{ "i", _printint }
};
y = 0;
p = "";
va_start(l, format);
while (format != NULL && format[y / 4] != '\0')
{
z = y % 4;
if (storage[z].type[0] == format[y / 4])
{
printf("%s", p);
storage[z].f(l);
p = ", ";
}
y++;
}
printf("\n");
va_end(l);
}
