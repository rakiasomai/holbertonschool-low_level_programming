#include <stdio.h>
#include <stdlib.h>
/**
* op_add - addition operator
* @a: is an integer
* @b: is an integer
* Return: summe of two numbers
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - subtraction operator
* @a: is an integer
* @b: is an integer
* Return: the difference of two numbers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - product of two numbers
* @a: is an inetger
* @b: is an integer
* Return: product of the numbers
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - division of two numbers
* @a: is an inetger
* @b: is an integer
* Return: the result of the division of the numbers.
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
* op_mod - get remainder of the division of two numbers
* @a: is an integer
* @b: is an integer
* Return: the remainder of division of the numbers
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
