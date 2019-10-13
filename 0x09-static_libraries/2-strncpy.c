#include "holberton.h"
/**
* *_strncpy -  a function that copies a string.
* @dest : string of characters
* @src : string of characters
* @n : integers
* Return: 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
