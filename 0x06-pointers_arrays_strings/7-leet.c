#include "holberton.h"
/**
* *leet - function that encodes a string.
* @b: string of characters
* Return: 0
*/
char *leet(char *b)
{
int y;
int z;
char r1[] = {'a', 'A', 'E', 'e', 'o', 'O', 't', 'T', 'L', 'l'};
char r2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (y = 0; b[y] != '\0'; y++)
{
for (z = 0; z <= 9; z++)
{
if (b[y] == r1[z])
b[y] = r2[z];
}
}
return (b);
}
