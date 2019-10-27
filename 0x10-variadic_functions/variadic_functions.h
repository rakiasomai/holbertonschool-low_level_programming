#ifndef VARIADIC_FUNCTIONS_
#define VARIADIC_FUNCTIONS_
#include <stdarg.h>
/**
* struct print - type print function.
* @c: print type.
* @func: print a function.
*/
typedef struct print
{
char *c;
void (*func)(va_list);
} print_f;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
