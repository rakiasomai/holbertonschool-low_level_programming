#include "function_pointers.h"
/**
* int_index - Function that searches for an integer
* @array: is an array.
* @size: the size of array
* @cmp: is a  function pointer
* Return: cmp or -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int y;
if (size < 1 || array == NULL || cmp == NULL)
return (-1);
for (y = 0; y < size; y++)
{
if (cmp(array[y]))
return (y);
}
return (-1);
}
