#include "holberton.h"
/**
* swap_int - swaps the values of two integers.
* @a : is an integer
* @b : is an integer
* Return: 0
*/
void swap_int(int *a, int *b)
{
int y;
y = *a;
*a = *b;
*b = y;
}
