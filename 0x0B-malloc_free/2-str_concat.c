#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
* @s1: is string number 1
* @s2: is string number 2
* Return: NULL
*/
char *str_concat(char *s1, char *s2)
{
char *p;
int y, x, a, b;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (y = 0; s1[y] != '\0'; y++)
;
for (x = 0; s2[x] != '\0'; x++)
;
p = malloc((y * sizeof(*s1)) + (x * sizeof(*s2)) + 1);
if (p == NULL)
return (NULL);
for (a = 0, b = 0; a < (y + x + 1); a++)
{
if (a < y)
p[a] = s1[a];
else
p[a] = s2[b++];
}
return (p);
}
