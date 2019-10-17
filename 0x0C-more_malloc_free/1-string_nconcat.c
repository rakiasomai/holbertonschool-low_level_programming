#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - a function that concatenates two strings.
* @s1: is a stirng.
* @s2: is a string 2
* @n: is an integer
* Return: NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p, *m;
unsigned int y, x;
m = "";
if (s1 == NULL)
s1 = m;
if (s2 == NULL)
s2 = m;
for (y = 0; s1[y] != '\0'; y++)
;
p = malloc((y + (n * sizeof(*s2) + 1) * sizeof(*p)));
if (p == NULL)
return (NULL);
for (y = 0; s1[y] != '\0'; y++)
p[y] = s1[y];
for (x = 0; s2[x] != '\0' && x < n; x++, y++)
p[y] = s2[x];
p[y] = '\0';
return (p);
}
