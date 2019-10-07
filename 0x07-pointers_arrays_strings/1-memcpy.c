#include "holberton.h"
/**
* *_memcpy - function that copies bytes from area
* @dest : is an memory area
* @src : is an memory area
* @n : is an integer
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (dest);
}
