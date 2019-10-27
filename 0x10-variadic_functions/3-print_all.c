#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_char - print a character.
* @c: a character to print.
* Return: void.
*/
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}
/**
* print_str - function that print a string
* @s: is a string.
* Return: void.
*/
void print_str(va_list s)
{
char *str = va_arg(s, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}
/**
* print_int - function that print a integer
* @i: is an integer.
* Return: void.
*/
void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}
/**
* print_float - function that print a float.
* @f: is a float.
* Return: void.
*/
void print_float(va_list f)
{
printf("%f", va_arg(f, double));
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
