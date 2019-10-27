#ifndef VARIADIC_FUNCTIONS_
#define VARIADIC_FUNCTIONS_
#include <stdarg.h>

typedef struct checker
{
	char *type;
	void (*f)();
} checker;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list c);
void print_str(va_list s);
void print_int(va_list i);
void print_float(va_list f);


#endif
