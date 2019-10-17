#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* array_range - a function that creates an array of integers.
* @min: is an integer
* @max: is an integer
* Return: pointer
*/
int *array_range(int min, int max)
{
int *p;
int x, y;
if (min > max)
return (NULL);
x = max - min;
p = malloc((x + 1) * sizeof(int));
if (p == NULL)
return (NULL);
for (y = 0; y <= x; min++, y++)
{
p[y] = min;
}
return (p);
}
