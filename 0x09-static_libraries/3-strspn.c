#include "holberton.h"
/**
* _strspn - function that gets the length of a prefix substring
* @s: string
* @accept: string
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
int y;
int z;
int x;
y = 0;
x = 0;
while (s[y] != '\0')
{
z = 0;
while (accept[z] != '\0')
{
if (s[y] == accept[z])
{
x++;
break;
}
z++;
}
if (accept[z] == '\0')
break;
y++;
}
return (x);
}
