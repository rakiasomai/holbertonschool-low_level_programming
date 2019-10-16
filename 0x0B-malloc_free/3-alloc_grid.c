#include <stdlib.h>
#include "holberton.h"
/**
* **alloc_grid - unction that returns a pointer to a 2 dimensional array
* @width: is an integer
* @height: is an integer
* Return: NULL
*/
int **alloc_grid(int width, int height)
{
int **p;
int y, z;
if (width + height < 2 || width < 1 || height < 1)
return (NULL);
p = malloc(height * sizeof(*p));
if (p == NULL)
return (NULL);
for (y = 0; y < height; y++)
{
p[y] = malloc(width * sizeof(**p));
if (p[y] == NULL)
{
for (y--; y >= 0; y--)
free(p[y]);
free(p);
return (NULL);
}
for (z = 0; z < width; z++)
p[y][z] = 0;
}
return (p);
}
