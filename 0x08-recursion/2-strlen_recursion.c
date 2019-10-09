#include "holberton.h"
/**
* _strlen_recursion - function that returns length of a string
* @s: is a string
* Return: length of string.
*/
int _strlen_recursion(char *s)
{
int y;
y = 0;
if (*s == '\0')
return (0);
y = 1 +  _strlen_recursion(s + 1);
return (y);
}
