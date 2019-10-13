#include "holberton.h"
/**
* *_strpbrk - function that searches a string
* @s: string
* @accept: string
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
int y;
int z;
char *x;
y = 0;
while (s[y] != '\0')
{
z = 0;
while (accept[z] != '\0')
{
if (accept[z] == s[y])
{
x = &s[y];
return (x);
}
z++;
}
y++;
}
return (0);
}
