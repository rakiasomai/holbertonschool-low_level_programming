#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - is a main function
* @argc: arguments to count
* @argv: is a string of arguments in array
* Return: 0()
*/
int main(int argc, char *argv[])
{
int y, z;
int (*p)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
p = get_op_func(argv[2]);
if (p == NULL)
{
printf("Error\n");
exit(99);
}
y = atoi(argv[1]);
z = atoi(argv[3]);
printf("%d\n", p(y, z));
return (0);
}
