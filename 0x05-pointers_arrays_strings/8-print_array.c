#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints elements of an array of integers
* @a : is an integer
* @n : is an integer
* Return: 0
*/
void print_array(int *a, int n)
{
int y;
for (y = 0; y < n; y++)
{
if (y == n - 1)
printf("%d", *(a + y));
else
printf("%d, ", *(a + y));
}
printf("\n");
}
