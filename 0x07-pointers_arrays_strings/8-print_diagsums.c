#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - function that print the sum
* @a: is an integer
* @size: integer
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int y;
int z;
int x;
y = 0;
z = 0;
x = size * size;
while (y < x)
{
if (y % (size + 1) == 0)
z += a[y];
y++;
}
printf("%d, ", z);
z = 0;
y = 0;
while (y < x)
{
if (y % (size - 1) == 0 && y != (z - 1) && y != 0)
z += a[y];
y++;
}
printf("%d\n", z);
}
