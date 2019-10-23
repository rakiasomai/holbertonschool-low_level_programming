#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - is select the correct operations.
 * @s: operator arguments.
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int y;
y = 0;
while (y < 5)
{
if (ops[y].op[0] == s[0])
return (ops[y].f);
y++;
}
return (NULL);
}
