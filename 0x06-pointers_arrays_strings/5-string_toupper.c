#include "holberton.h"
/**
* *string_toupper -function that changes all lowercase letters
* @b : characers
* Return: 0
*/
char *string_toupper(char *b)
{
int y;
for (y = 0; b[y] != 0; y++)
{
if (b[y] > 90 && b[y] != 10)
{
b[y] = b[y] - 32;
}
}
return (b);
}
