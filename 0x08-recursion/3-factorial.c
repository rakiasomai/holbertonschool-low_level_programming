#include "holberton.h"
/**
* factorial - function that returns factorial of a given number.
* @n: is an integer
* Return: factorial of number
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n < 2)
return (n);
else
return (n * factorial(n - 1));
}
