#include "holberton.h"
/**
* _strcmp - function that compares two strings.
* @s1 : characters
* @s2 : characters
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
int y;
int z;
for (y = 0; *(s1 + y) != '\0' && *(s2 + y) != '\0'; y++)
{
if (*(s1 + y) != *(s2 + y))
{
z = (*(s1 + y) - *(s2 + y));
*(s1 + y + 1) = '\0';
}
else
z = 0;
}
return (z);
}

