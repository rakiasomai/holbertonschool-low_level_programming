#include "holberton.h"
/**
* *_strcpy - function that copies the string pointed
* @dest : characters.
* @src : characters .
* Return: 0
*/
char *_strcpy(char *dest, char *src)
{
int y;
int z;
y = 0;
while (*(src + y) != '\0')
{
y++;
}
y++;
z = 0;
while (z < y)
{
dest[z] = src[z];
z++;
}
return (&*dest);
}
