#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_iterator -  function that executes a function given as a parameter
* @array: is an array of integers
* @size: the size of array
* @action: is a function to a pointer.
* Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t y;
if (array != NULL && action != NULL)
for (y = 0; y < size; y++)
action(array[y]);
}
