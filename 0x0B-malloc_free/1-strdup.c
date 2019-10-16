#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - function returns a pointer
* @str: is string of characters
* Return: NULL
*/
char *_strdup(char *str)
{
char *p;
int y, x;
if (str == NULL)
return (NULL);
for (y = 0; str[y] != '\0'; y++)
;
p = malloc(y * sizeof(*p) + 1);
if (p == NULL)
return (NULL);
for (x = 0; x < y; x++)
p[x] = str[x];
p[x] = '\0';
return (p);
}
