#include "holberton.h"
/**
* *_memset - function filles the first bytes of the memory
* @s : is a pointer
* @b : is a character
* @n : is an integer
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
int y;
y = 0;
while (n > 0)
{
s[y] = b;
y ++;
n --;
}
return(s);
}
