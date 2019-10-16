#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - function thats concatenates all the argument
* @ac: is an integer
* @av: is a charcters
* Return: Null
*/
char *argstostr(int ac, char **av)
{
char *p, *b;
int y, z, x;
if (ac == 0 || av == NULL)
return (NULL);
for (y = 0, x = 0; y < ac; y++)
{
for (z = 0; *(*(av + y) + z) != '\0'; z++, x++)
;
x++;
}
x++;
p = malloc(x *sizeof(char));
if (p == NULL)
return (NULL);
b = p;
for (y = 0; y < ac; y++)
{
for (z = 0; av[y][z] != '\0'; z++)
{
*p = av[y][z];
p++;
}
*p = '\n';
p++;
}
return (b);
}
