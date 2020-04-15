#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
* binary_search - binary search a ascending sorted array
* @array: this is a pointer
* @size: number of elements in array
* @value: value to search for
* Return: -1 if error or not found
*/
int binary_search(int *array, size_t size, int value)
{
int take;
size_t a = 0;
if (array == NULL || size == 0)
return (-1);
size--;
while (a <= size)
{
print_array(array, a, size);
take = (size - a) / 2 + a;
if (array[take] == value)
return (take);
else if (array[take] < value)
{
if (size % 2 == 1)
a = take + 1;
else
a = take;
}
else
{
if (size % 2 == 1)
size = take;
else
size = take - 1;
}
}
return (-1);
}
/**
* print_array - printing the current array
* @array: this is an array
* @add: starting incrementer index
* @size: the size ofincremeneted idex
*/
void print_array(int *array, size_t add, size_t size)
{
printf("Searching in array: ");
for (; add <= size; add++)
{
printf("%d", array[add]);
if (add < size)
printf(", ");
}
printf("\n");
}
