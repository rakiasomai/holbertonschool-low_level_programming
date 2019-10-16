#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - unction that frees a 2 dimensional
* @grid: is a double pointer
* @height: is an integer
*/
void free_grid(int **grid, int height)
{
int y;
for (y = 0; y < height; y++)
free(grid[y]);
free(grid);
}
