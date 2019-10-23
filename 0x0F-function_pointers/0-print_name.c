#include "function_pointers.h"
/**
* print_name - function that prints a name
* @name: is a char
* @f: is a function to a pointer
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
