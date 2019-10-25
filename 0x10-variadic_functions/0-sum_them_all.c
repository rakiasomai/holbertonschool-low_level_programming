#include "variadic_functions.h"
/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: is an integer.
* Return: the sum.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int y;
va_list x;
int sum;
va_start(x, n);
for (y = 0, sum = 0; y < n; y++)
sum += va_arg(x, int);
va_end(x);
return (sum);
}
