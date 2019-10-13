#include "holberton.h"
/**
* *_strchr - function that locates a character in a string
* @s: is a string
* @c : is the charcater to locate
* Return: c
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}
return (s + 1);
}
