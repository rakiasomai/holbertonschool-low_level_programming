#include "holberton.h"
/**
* _strlen - eturns the length of a string.
* @s : is a character
* Return: 0
*/
int _strlen(char *s)
{
int i;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
