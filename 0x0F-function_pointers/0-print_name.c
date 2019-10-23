#include "function_pointers.h"
/**
* print_name - function that prints a name
* @name: is a char
* @f: is a function to a pointer
* Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
