#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_search - binary search a ascending sorted array to find a value.
* @array: this is a pointer
* @size: numb of elmts
* @value: value to search
* Return: index or -1 in case o error
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
* print_array - print the array
* @array: array to print
* @add: this is an index
* @size: the size of inc element
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
