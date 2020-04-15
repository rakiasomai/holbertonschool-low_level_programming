#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
* linear_search - searching an array for a value
* @array: this is a pointer
* @size: number of elements
* @value: this is a value to search
* Return: -1 in case error
*/
int linear_search(int *array, size_t size, int value)
{
size_t y;
if (array == NULL || size == 0)
return (-1);

for (y = 0; y < size; y++)
{
printf("Value checked array[%lu] = [%d]\n", y, array[y]);
if (value == array[y])
return (y);
}
return (-1);
}
