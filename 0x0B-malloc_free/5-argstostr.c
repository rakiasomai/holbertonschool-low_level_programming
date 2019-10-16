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
char *p1, *p;
int y, z, x;
if (ac == 0 || av == NULL)
return (NULL);
for (y = 0, total = 0; y < ac; y++)
{
for (z = 0; *(*(av + y) + z) != '\0'; z++, x++)
;
x++;
}
x++;
p1 = malloc(x * sizeof(char));
if (p1 == NULL)
return (NULL);
p = p1;
for (y = 0; y < ac; y++)
{
for (y = 0; av[y][z] != '\0'; z++)
{
*p1 = av[y][z];
p1++;
}
*p1 = '\n';
p1++;
}
return (p);
}
