#include "holberton.h"
/**
* reverse_array - function that reverses the content
* @a : integer
* @n : integer
* Return: 0
*/
void reverse_array(int *a, int n)
{
int y;
int z;
int r;
if (n % 2 != 0)
r = n + 1;
else
r = n;
for (y = 0; y < r / 2; y++)
{
z = a[y];
a[y] = a[n - 1 - y];
a[n - 1 - y] = z;
}
}
