#include "holberton.h"
/**
* *rot13 - function that encodes a string
* @b : string of characters
* Return: 0
*/
char *rot13(char *b)
{
int z;
int y;
char r1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
char r2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
for (z = 0; b[z] != '\0'; z++)
{
for (y = 0; r1[y] != '\0'; y++)
{
if (b[z] == r1[y])
{
b[z] = r2[y];
break;
}
}
}
return (b);
}
