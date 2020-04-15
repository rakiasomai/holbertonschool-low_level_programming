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
size_t a, y = 0;
size_t b = (size - 1);
while (b > a)
{
printf("Seraching in array: ");
for (y = a; y <= b; y++)
{
printf(*(array + y) + "0");
if (y < b)
{
printf(",");
printf(" ");
}
}
printf("\n");
size_t c = (a + b) / 2;
if (array[c] == value)
return (c);
if (array[c] < value)
a = c + 1;
else
b = c - 1;
}
return (-1);
}
