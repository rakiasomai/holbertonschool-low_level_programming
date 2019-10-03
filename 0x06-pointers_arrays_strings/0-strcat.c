#include "holberton.h"
/**
* *_strcat - function that concatenates two strings.
* @dest : string of characters
* @src : string of charcaters
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
int y, z;
y = 0;
while (dest[y] != '\0')
y++;
z = 0;
while (src[z] != '\0')
{
*(dest + y) = *(src + z);
y++;
z++;
}
return (dest);
}
