#include "holberton.h"
/**
* get_endianness - function that checks the endianness.
* Return: 0 or 1.
*/
int get_endianness(void)
{
int y;
y = 1;
if (*(char *)&y == 1)
return (1);
else
return (0);
}
