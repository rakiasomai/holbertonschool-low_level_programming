#include "holberton.h"
/**
* *_strncat - function that concatenates two strings.
* @dest : string of characters
* @src : string of charcaters
* @n : is an integer.
* Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
int y, z;
y = 0;
while (dest[y] != '\0')
y++;
z = 0;
while ((src[z] != '\0') && (z < n))
{
*(dest + y) = *(src + z);
y++;
z++;
}
return (dest);
}
