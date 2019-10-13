#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that adds positive numbers.
* @argc: is an argument.
* @argv: is an argument.
* Descriptions: If no number is passed to program, print 0.
* If one of the numbers contain non-digits, print Error.
* Return: 1
*/
int main(int argc, char *argv[])
{
int x, y;
char *p;
int n;
x = 0;
if (argc > 1)
{
for (y = 1; argv[y]; y++)
{
n = strtol(argv[y], &p, 10);
if (!*p)
x += n;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", x);
return (0);
}
