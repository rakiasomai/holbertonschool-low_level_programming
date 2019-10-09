#include "holberton.h"
/**
* wildcmp - function who compares two strings
* @s1: string num 1
* @s2: string num 2
* Return: 1 if strings identical and 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
return (1);
if (*s2 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
return (0);
return (0);
}
